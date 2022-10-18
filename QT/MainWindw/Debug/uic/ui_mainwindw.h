/********************************************************************************
** Form generated from reading UI file 'mainwindw.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDW_H
#define UI_MAINWINDW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindwClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindwClass)
    {
        if (MainWindwClass->objectName().isEmpty())
            MainWindwClass->setObjectName(QString::fromUtf8("MainWindwClass"));
        MainWindwClass->resize(600, 400);
        menuBar = new QMenuBar(MainWindwClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        MainWindwClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindwClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindwClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MainWindwClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindwClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindwClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindwClass->setStatusBar(statusBar);

        retranslateUi(MainWindwClass);

        QMetaObject::connectSlotsByName(MainWindwClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindwClass)
    {
        MainWindwClass->setWindowTitle(QCoreApplication::translate("MainWindwClass", "MainWindw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindwClass: public Ui_MainWindwClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDW_H
