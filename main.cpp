#include "mainwindow.h"

#include <QApplication>

#include <QSimpleUpdater.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString url = "https://raw.githubusercontent.com/thinkexist1989/TestUpdater/main/config/updates.json";

    auto updater = QSimpleUpdater::getInstance();

    updater->setModuleVersion(url, "0.4");
    // updater->setModuleName(url, "updates");
    updater->setNotifyOnUpdate(url, true);
    updater->setNotifyOnFinish(url, true);

    updater->setDownloaderEnabled(url, true);
    updater->setMandatoryUpdate(url, true);

    updater->checkForUpdates(url);

    MainWindow w;
    w.show();
    return a.exec();
}
