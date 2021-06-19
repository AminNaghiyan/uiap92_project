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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_categories
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *close;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *creat_new_category;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *add_to_category;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *search_category;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *categories)
    {
        if (categories->objectName().isEmpty())
            categories->setObjectName(QString::fromUtf8("categories"));
        categories->resize(800, 600);
        verticalLayout = new QVBoxLayout(categories);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        back = new QPushButton(categories);
        back->setObjectName(QString::fromUtf8("back"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy);
        back->setMinimumSize(QSize(60, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon);
        back->setIconSize(QSize(60, 40));

        horizontalLayout->addWidget(back);

        horizontalSpacer_8 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        close = new QPushButton(categories);
        close->setObjectName(QString::fromUtf8("close"));
        sizePolicy.setHeightForWidth(close->sizePolicy().hasHeightForWidth());
        close->setSizePolicy(sizePolicy);
        close->setMinimumSize(QSize(60, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon1);
        close->setIconSize(QSize(60, 40));

        horizontalLayout->addWidget(close);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, -1);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));

        verticalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(270, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        creat_new_category = new QPushButton(categories);
        creat_new_category->setObjectName(QString::fromUtf8("creat_new_category"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(200);
        sizePolicy1.setVerticalStretch(200);
        sizePolicy1.setHeightForWidth(creat_new_category->sizePolicy().hasHeightForWidth());
        creat_new_category->setSizePolicy(sizePolicy1);
        creat_new_category->setMinimumSize(QSize(8, 80));
        creat_new_category->setMaximumSize(QSize(200, 107));
        creat_new_category->setSizeIncrement(QSize(0, 12));

        horizontalLayout_2->addWidget(creat_new_category);

        horizontalSpacer_3 = new QSpacerItem(270, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_9 = new QSpacerItem(270, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        add_to_category = new QPushButton(categories);
        add_to_category->setObjectName(QString::fromUtf8("add_to_category"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(add_to_category->sizePolicy().hasHeightForWidth());
        add_to_category->setSizePolicy(sizePolicy2);
        add_to_category->setMinimumSize(QSize(8, 80));
        add_to_category->setMaximumSize(QSize(200, 107));

        horizontalLayout_5->addWidget(add_to_category);

        horizontalSpacer_10 = new QSpacerItem(270, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(270, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        search_category = new QPushButton(categories);
        search_category->setObjectName(QString::fromUtf8("search_category"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(103);
        sizePolicy3.setVerticalStretch(200);
        sizePolicy3.setHeightForWidth(search_category->sizePolicy().hasHeightForWidth());
        search_category->setSizePolicy(sizePolicy3);
        search_category->setMinimumSize(QSize(200, 80));
        search_category->setMaximumSize(QSize(100, 200));
        search_category->setSizeIncrement(QSize(0, 200));

        horizontalLayout_4->addWidget(search_category);

        horizontalSpacer_5 = new QSpacerItem(270, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(categories);

        QMetaObject::connectSlotsByName(categories);
    } // setupUi

    void retranslateUi(QWidget *categories)
    {
        categories->setWindowTitle(QApplication::translate("categories", "Form", nullptr));
        back->setText(QString());
        close->setText(QString());
        creat_new_category->setText(QApplication::translate("categories", "Creat new category", nullptr));
        add_to_category->setText(QApplication::translate("categories", "Add a book to a category", nullptr));
        search_category->setText(QApplication::translate("categories", "Search for a category", nullptr));
    } // retranslateUi

};

namespace Ui {
    class categories: public Ui_categories {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORIES_H
