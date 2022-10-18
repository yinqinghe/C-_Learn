#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ui.h"

class ui : public QMainWindow
{
    Q_OBJECT

public:
    ui(QWidget *parent = Q_NULLPTR);

private:
    Ui::uiClass ui;
};
