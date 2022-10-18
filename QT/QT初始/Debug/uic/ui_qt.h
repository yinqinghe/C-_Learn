/********************************************************************************
** Form generated from reading UI file 'qt.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_H
#define UI_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTClass
{
public:

    void setupUi(QWidget *QTClass)
    {
        if (QTClass->objectName().isEmpty())
            QTClass->setObjectName(QString::fromUtf8("QTClass"));
        QTClass->resize(600, 400);

        retranslateUi(QTClass);

        QMetaObject::connectSlotsByName(QTClass);
    } // setupUi

    void retranslateUi(QWidget *QTClass)
    {
        QTClass->setWindowTitle(QCoreApplication::translate("QTClass", "QT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTClass: public Ui_QTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_H
