#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QWidget>
#include "ui_qt.h"

class QT : public QWidget
{
    Q_OBJECT

public:
    QT(QWidget *parent = Q_NULLPTR);

private:
    Ui::QTClass ui;
};
