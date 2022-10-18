/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionSave;
    QAction *actiondelete;
    QAction *actionjpg;
    QAction *actionpng;
    QAction *actionadd;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *file;
    QMenu *menuNew;
    QMenu *edit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(600, 400);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/01.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/01.jpg"), QSize(), QIcon::Active, QIcon::On);
        MainWindowClass->setWindowIcon(icon);
        MainWindowClass->setWindowOpacity(0.000000000000000);
        actionSave = new QAction(MainWindowClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actiondelete = new QAction(MainWindowClass);
        actiondelete->setObjectName(QString::fromUtf8("actiondelete"));
        actionjpg = new QAction(MainWindowClass);
        actionjpg->setObjectName(QString::fromUtf8("actionjpg"));
        actionpng = new QAction(MainWindowClass);
        actionpng->setObjectName(QString::fromUtf8("actionpng"));
        actionadd = new QAction(MainWindowClass);
        actionadd->setObjectName(QString::fromUtf8("actionadd"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        file = new QMenu(menuBar);
        file->setObjectName(QString::fromUtf8("file"));
        menuNew = new QMenu(file);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        edit = new QMenu(menuBar);
        edit->setObjectName(QString::fromUtf8("edit"));
        MainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(file->menuAction());
        menuBar->addAction(edit->menuAction());
        file->addAction(menuNew->menuAction());
        file->addAction(actionSave);
        file->addSeparator();
        file->addAction(actiondelete);
        menuNew->addAction(actionjpg);
        menuNew->addAction(actionpng);
        menuNew->addAction(actionadd);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindowClass", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindowClass", "Ctrl+N, Return", nullptr));
#endif // QT_CONFIG(shortcut)
        actiondelete->setText(QCoreApplication::translate("MainWindowClass", "delete", nullptr));
        actionjpg->setText(QCoreApplication::translate("MainWindowClass", "jpg", nullptr));
        actionpng->setText(QCoreApplication::translate("MainWindowClass", "png", nullptr));
#if QT_CONFIG(shortcut)
        actionpng->setShortcut(QCoreApplication::translate("MainWindowClass", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionadd->setText(QCoreApplication::translate("MainWindowClass", "add", nullptr));
        file->setTitle(QCoreApplication::translate("MainWindowClass", "\346\226\207\344\273\266", nullptr));
        menuNew->setTitle(QCoreApplication::translate("MainWindowClass", "New", nullptr));
        edit->setTitle(QCoreApplication::translate("MainWindowClass", "\347\274\226\350\276\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
