#include "mainwindow.h"
#include <QString>
#include <QApplication>
#include <Eiertimer.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Eiertimer v;
    w.show();
    return a.exec();
}
