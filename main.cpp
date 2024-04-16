#include "mainwindow.h"

#include <QApplication>

#include <QSimpleUpdater.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString url = "https://github.com/thinkexist1989/TestUpdater/blob/main/config/updates.json";

    QSimpleUpdater::getInstance()->setNotifyOnUpdate(url, true);
    QSimpleUpdater::getInstance()->setNotifyOnFinish(url, false);

    QSimpleUpdater::getInstance()->setDownloaderEnabled(url, true);

    QSimpleUpdater::getInstance()->checkForUpdates(url);

    MainWindow w;
    w.show();
    return a.exec();
}
