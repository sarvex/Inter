#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>

#include "AnimateButton.h"
#include "ImageButton.h"

#include <QBuffer>
#include <QByteArray>
#include <QHttp>
#include <QLabel>
#include <QPixmap>
#include <QSystemTrayIcon>
#include <QTranslator>
#include <QUrl>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    bool onReceiveMessage (const QString& message);

    bool onHelpButtonClicked ();
    bool onMinimizeButtonClicked ();
    bool onCloseButtonClicked ();

    bool onSettingsButtonClicked ();
    bool onBrowserButtonClicked ();
    bool onConnectButtonClicked ();

signals:

protected:
    void paintEvent(QPaintEvent* event);

    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent* event);

    void keyPressEvent (QKeyEvent* event);


private:
    ImageButton * helpButton;
    ImageButton * minimizeButton;
    ImageButton * closeButton;

    ImageButton * connectButton;

    ImageButton * settingsButton;
    ImageButton * browserButton;
    ImageButton * header;

    QImage * background;

    bool moving;
    bool connected;

    QLabel * dataRate;
    QLabel * signalStrength;
    QLabel * graph;

    QList <QPixmap> signalStrengthImage;
    QList <QPixmap> dataRates;

    QPoint offset;
};

#endif // MAINWINDOW_H
