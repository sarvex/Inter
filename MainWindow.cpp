#include "MainWindow.h"

#include "DeamonInterface.h"
#include "DeamonConnection.h"
#include "DeamonDatabase.h"
#include "DeamonSetting.h"
#include "Define.h"
#include "DialogSetting.h"

#include <QApplication>
#include <QDebug>
#include <QDesktopServices>
#include <QDir>
#include <QMenu>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPainter>
#include <QProcess>
#include <QPainter>

bool
MainWindow::onReceiveMessage
(const QString& message)
{
    Q_UNUSED (message);

    this->showNormal();

    return (true);
}

MainWindow::MainWindow
(QWidget *parent)
    : QMainWindow(parent),
      moving (false),
      connected (false)
{
    this->background = new QImage (":/background.png");

    this->header = new ImageButton ("TurboDialer",
                                    ":/headerBackground.png",
                                    false, this);
    this->header->setGeometry (200, 10, 103, 30);

    this->helpButton = new ImageButton ("",
                                        ":/helpDefault.png",
                                        ":/helpHover.png",
                                        false, this);
    this->helpButton->setGeometry (10, 12, 24, 25);

    this->minimizeButton = new ImageButton("",
                                           ":/minimizeDefault.png",
                                           ":/minimizeHover.png",
                                           false, this);
    this->minimizeButton->setGeometry (408, 12, 25, 25);

    this->closeButton = new ImageButton ("",
                                         ":/closeDefault.png",
                                         ":/closeHover.png",
                                         false, this);
    this->closeButton->setGeometry (441, 13, 25, 24);

    this->connectButton = new ImageButton ("",
                                           ":/connectDefault.png",
                                           ":/connectHover.png",
                                           ":/connectPress.png",
                                           false, this);
    this->connectButton->setGeometry (80, 200, 95, 95);
    this->connectButton->setEnabled (false);

    this->settingsButton = new ImageButton ("",
                                            ":/settingsDefault.png",
                                            ":/settingsHover.png",
                                            ":/settingsPress.png",
                                            false, this);
    this->settingsButton->setGeometry (225, 200, 45, 44);
    this->settingsButton->setEnabled (false);

    this->browserButton = new ImageButton("",
                                          ":/browserDefault.png",
                                          ":/browserHover.png",
                                          ":/browserPress.png",
                                          false, this);
    this->browserButton->setGeometry (370, 200, 40, 40);
    this->browserButton->setEnabled (false);

    this->signalStrengthImage << QPixmap(":/signalStrength0.png");
    this->signalStrengthImage << QPixmap(":/signalStrength1.png");
    this->signalStrengthImage << QPixmap(":/signalStrength2.png");
    this->signalStrengthImage << QPixmap(":/signalStrength3.png");
    this->signalStrengthImage << QPixmap(":/signalStrength4.png");
    this->signalStrengthImage << QPixmap(":/signalStrength5.png");

    this->signalStrength = new QLabel (this);
    this->signalStrength->setPixmap (this->signalStrengthImage.at(0));
    this->signalStrength->setGeometry (340, 60, 97, 74);

    this->dataRates << QPixmap(":/speedMeter1.png");
    this->dataRates << QPixmap(":/speedMeter2.png");
    this->dataRates << QPixmap(":/speedMeter3.png");
    this->dataRates << QPixmap(":/speedMeter4.png");
    this->dataRates << QPixmap(":/speedMeter5.png");
    this->dataRates << QPixmap(":/speedMeter6.png");
    this->dataRates << QPixmap(":/speedMeter7.png");
    this->dataRates << QPixmap(":/speedMeter8.png");
    this->dataRates << QPixmap(":/speedMeter9.png");
    this->dataRates << QPixmap(":/speedMeter10.png");
    this->dataRates << QPixmap(":/speedMeter11.png");
    this->dataRates << QPixmap(":/speedMeter12.png");

    this->dataRate = new QLabel (this);
    this->dataRate->setPixmap (this->dataRates.at(0));
    this->dataRate->setGeometry (35, 60, 133, 69);

    this->graph = new QLabel (this);
    this->graph->setPixmap (QPixmap (":/graph.png"));
    this->graph->setGeometry (195, 65, 126, 63);

    QObject::connect (this->helpButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onHelpButtonClicked()));

    QObject::connect (this->minimizeButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onMinimizeButtonClicked()));

    QObject::connect (this->closeButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onCloseButtonClicked()));

    QObject::connect (this->connectButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onConnectButtonClicked()));

    QObject::connect (this->settingsButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onSettingsButtonClicked()));

    QObject::connect (this->browserButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onBrowserButtonClicked()));
}

MainWindow::~MainWindow ()
{

}

void
MainWindow::paintEvent
(QPaintEvent * event)
{
    Q_UNUSED (event)

    QPainter painter(this);
    painter.drawImage(QPoint(0,0), *this->background);
    painter.end ();
}

void
MainWindow::mouseMoveEvent
(QMouseEvent * event)
{
    if (this->moving)
    {
        this->move(event->globalPos() - this->offset);
    }
}

void
MainWindow::mousePressEvent
(QMouseEvent * event)
{
    if (event->button() == Qt::LeftButton)
    {
        this->moving = true;
        this->offset = event->pos();
    }
}

void
MainWindow::mouseReleaseEvent
(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        this->moving = false;
    }
}

void
MainWindow::keyPressEvent
(QKeyEvent* event)
{
    if (Qt::Key_F1 == event->key())
    {
        QDesktopServices::openUrl (QUrl::fromLocalFile (
                                       qApp->applicationDirPath() + "/help.chm"));
    }
}

bool
MainWindow::onHelpButtonClicked ()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile(
                                  qApp->applicationDirPath() + "/help.chm"));

    return true;
}

bool
MainWindow::onMinimizeButtonClicked ()
{
    this->hide();

    return (true);
}

bool
MainWindow::onCloseButtonClicked ()
{
    if (true == this->connected)
    {
        if ( QMessageBox::Ok ==
             QMessageBox::information (NULL,
                                       APPLICATION_NAME,
                                       tr("Do you want to disconnect connection?"),
                                       QMessageBox::Ok|QMessageBox::Cancel,
                                       QMessageBox::Cancel)) {

            DeamonConnection::getInstance ()->disconnectDataCall ();
        }

        else
        {
            return false;
        }
    }

    DeamonDatabase::getInstance ()->closeDatabase ();

    DeamonInterface::getInstance ()->stop ();
    DeamonInterface::getInstance ()->wait ();

    qApp->quit ();
    return (true);
}

bool
MainWindow::onSettingsButtonClicked ()
{
    DialogSetting dialogSettings (this);
    QObject::connect (&dialogSettings,
                      SIGNAL(languageChange(QString)),
                      this,
                      SLOT(onLanguageChange(QString)));

    dialogSettings.exec ();

    return (true);
}

bool MainWindow::onBrowserButtonClicked() {
    QDesktopServices::openUrl (QUrl(HOME_PAGE));

    return (true);
}

bool
MainWindow::onConnectButtonClicked()
{

    return true;
}
