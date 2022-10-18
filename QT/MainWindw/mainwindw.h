#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainwindw.h"

class MainWindw : public QMainWindow
{
    Q_OBJECT

public:
    MainWindw(QWidget *parent = Q_NULLPTR);

private:
    Ui::MainWindwClass ui;
};
