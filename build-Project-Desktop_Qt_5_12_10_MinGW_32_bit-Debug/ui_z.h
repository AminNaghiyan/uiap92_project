/********************************************************************************
** Form generated from reading UI file 'z.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Z_H
#define UI_Z_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Z
{
public:

    void setupUi(QWidget *Z)
    {
        if (Z->objectName().isEmpty())
            Z->setObjectName(QString::fromUtf8("Z"));
        Z->resize(400, 300);

        retranslateUi(Z);

        QMetaObject::connectSlotsByName(Z);
    } // setupUi

    void retranslateUi(QWidget *Z)
    {
        Z->setWindowTitle(QApplication::translate("Z", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Z: public Ui_Z {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Z_H
