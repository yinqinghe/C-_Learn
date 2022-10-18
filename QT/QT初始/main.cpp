#include "qt.h"
#include <QtWidgets/QApplication>
#pragma execution_character_set("utf-8")
int main(int argc, char *argv[])
{
    // QApplication  应用程序类  初始化我们的应用程序
    QApplication a(argc, argv);
    //创建一个窗口控件
    QT w;

    //显示一个窗口   hide隐藏窗口
    //窗口默认是隐藏的
    w.show();

    //a.exec()  主事件循环（带阻塞  等待用户操作界面）
    return a.exec();
}
