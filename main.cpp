#include "mainwindow.h"

#include <QApplication>

#include <QSimpleUpdater.h>

int main(int argc, char *argv[])
{
    QString url = "https://github.com/thinkexist1989/TestUpdater/config/updates.json";

    QSimpleUpdater::getInstance()->setNotifyOnUpdate(url, true);
    QSimpleUpdater::getInstance()->setNotifyOnFinish(url, false);

    QSimpleUpdater::getInstance()->checkForUpdates(url);


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
