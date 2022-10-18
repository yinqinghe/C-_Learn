#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<qdebug.h>
#include<qradiobutton.h>
#include <QRadioButton>
#pragma execution_character_set("utf-8")
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.qradioButton, &QRadioButton::clicked, [=]() {
        qDebug() << "Ñ¡ÖÐÁËÄÐ" << endl;
        });
}
