#include "ui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ui w;
    w.show();
    return a.exec();
}
