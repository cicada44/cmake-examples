#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

//    w.createPopupMenu();
    w.childrenRect();

    w.show();
    return a.exec();
}
