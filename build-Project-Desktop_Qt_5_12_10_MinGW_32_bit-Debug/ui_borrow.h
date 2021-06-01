/********************************************************************************
** Form generated from reading UI file 'borrow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROW_H
#define UI_BORROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_borrow
{
public:

    void setupUi(QWidget *borrow)
    {
        if (borrow->objectName().isEmpty())
            borrow->setObjectName(QString::fromUtf8("borrow"));
        borrow->resize(400, 300);

        retranslateUi(borrow);

        QMetaObject::connectSlotsByName(borrow);
    } // setupUi

    void retranslateUi(QWidget *borrow)
    {
        borrow->setWindowTitle(QApplication::translate("borrow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class borrow: public Ui_borrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROW_H
