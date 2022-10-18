/********************************************************************************
** Form generated from reading UI file 'ui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_H
#define UI_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uiClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *uiClass)
    {
        if (uiClass->objectName().isEmpty())
            uiClass->setObjectName(QString::fromUtf8("uiClass"));
        uiClass->resize(600, 400);
        menuBar = new QMenuBar(uiClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        uiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(uiClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        uiClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(uiClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        uiClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(uiClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        uiClass->setStatusBar(statusBar);

        retranslateUi(uiClass);

        QMetaObject::connectSlotsByName(uiClass);
    } // setupUi

    void retranslateUi(QMainWindow *uiClass)
    {
        uiClass->setWindowTitle(QCoreApplication::translate("uiClass", "ui", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uiClass: public Ui_uiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_H
