/********************************************************************************
** Form generated from reading UI file 'categories.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORIES_H
#define UI_CATEGORIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_categories
{
public:

    void setupUi(QWidget *categories)
    {
        if (categories->objectName().isEmpty())
            categories->setObjectName(QString::fromUtf8("categories"));
        categories->resize(400, 300);

        retranslateUi(categories);

        QMetaObject::connectSlotsByName(categories);
    } // setupUi

    void retranslateUi(QWidget *categories)
    {
        categories->setWindowTitle(QApplication::translate("categories", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class categories: public Ui_categories {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORIES_H
