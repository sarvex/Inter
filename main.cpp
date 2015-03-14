#include <QtGui/QApplication>

#include "Define.h"
#include "MainWindow.h"
#include "SingleApplication.h"

#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QProcess>
#include <QSplashScreen>
#include <QSystemTrayIcon>
#include <QStringList>
#include <QTextStream>
#include <QTimer>

void myMessageHandler(QtMsgType type, const char *message) {

    QStringList log = QStringList ()  << "" << "Warning" << "Critical" << "Fatal";

    QFile outFile(QDir::tempPath () + SLASH + LOG_FILE_NAME);
    outFile.open(QIODevice::WriteOnly | QIODevice::Append);

    QTextStream file(&outFile);
    QTextStream stde(stderr);

    file << log.at(type) << QString (message) << endl;
    stde << log.at(type) << QString (message) << endl;
}

int main(int argc, char *argv[])
{
    SingleApplication application(argc, argv, "669c3935-9fa3-4db7-92ab-e0c4b986bf6f-6e2fa71b-71aa-4ffe-9838-7c4b7ec19ec9");

    qInstallMsgHandler(myMessageHandler);

    if (application.isRunning()) {
        application.sendMessage("Message from other instace");
        return (0);
    }

    if (!QSystemTrayIcon::isSystemTrayAvailable()) {
        QMessageBox::critical(0, QObject::tr("System"), QObject::tr("No System Tray on this system."));
        return (1);
    }


    QProcess::startDetached (QApplication::applicationDirPath () + "/drivers/modem.exe", QStringList (), QApplication::applicationDirPath ());

    MainWindow mainWindow;
    mainWindow.setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint);
    mainWindow.setWindowIcon(QIcon(APPLICATION_ICON));
    mainWindow.setWindowTitle (APPLICATION_NAME);
    mainWindow.setFixedSize (480, 322);
    mainWindow.setAttribute(Qt::WA_TranslucentBackground);
    QObject::connect (&application, SIGNAL(messageAvailable(QString)), &mainWindow, SLOT(onReceiveMessage(QString)));

    SingleApplication::setQuitOnLastWindowClosed(false);
    QSplashScreen splash (QPixmap (SPLASH_SCREEN));
    splash.show();
    application.processEvents();

    QTimer::singleShot (SPLASH_SCREEN_TIMEOUT,
                        &splash,
                        SLOT(close()));

    QTimer::singleShot (SPLASH_SCREEN_TIMEOUT,
                        &mainWindow,
                        SLOT(show()));


    return application.exec();
}
