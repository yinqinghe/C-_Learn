#include "mainwindw.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindw w;
    w.show();
    return a.exec();
}
