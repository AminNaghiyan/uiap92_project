/********************************************************************************
** Form generated from reading UI file 'show_all.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_ALL_H
#define UI_SHOW_ALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_show_all
{
public:

    void setupUi(QWidget *show_all)
    {
        if (show_all->objectName().isEmpty())
            show_all->setObjectName(QString::fromUtf8("show_all"));
        show_all->resize(400, 300);

        retranslateUi(show_all);

        QMetaObject::connectSlotsByName(show_all);
    } // setupUi

    void retranslateUi(QWidget *show_all)
    {
        show_all->setWindowTitle(QApplication::translate("show_all", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show_all: public Ui_show_all {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_ALL_H
