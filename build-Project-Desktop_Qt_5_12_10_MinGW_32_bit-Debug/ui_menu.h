/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_7;
    QPushButton *add;
    QSpacerItem *verticalSpacer_2;
    QPushButton *delete_2;
    QSpacerItem *verticalSpacer;
    QPushButton *edit;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_3;
    QPushButton *search;
    QSpacerItem *verticalSpacer_4;
    QPushButton *show_all;
    QSpacerItem *verticalSpacer_5;
    QPushButton *categories;
    QSpacerItem *verticalSpacer_8;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *borrow;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(824, 637);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(menu->sizePolicy().hasHeightForWidth());
        menu->setSizePolicy(sizePolicy);
        menu->setMaximumSize(QSize(16777204, 16777215));
        menu->setSizeIncrement(QSize(100, 100));
        verticalLayout_3 = new QVBoxLayout(menu);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 13, -1, 13);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(60, 40));
        pushButton->setSizeIncrement(QSize(50, 50));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(60, -1, 60, -1);
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_7);

        add = new QPushButton(menu);
        add->setObjectName(QString::fromUtf8("add"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(210);
        sizePolicy1.setVerticalStretch(226);
        sizePolicy1.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy1);
        add->setMinimumSize(QSize(0, 70));
        add->setMaximumSize(QSize(16777215, 16777215));
        add->setSizeIncrement(QSize(0, 26));

        verticalLayout_7->addWidget(add);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        delete_2 = new QPushButton(menu);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setMinimumSize(QSize(0, 70));

        verticalLayout_7->addWidget(delete_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        edit = new QPushButton(menu);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setMinimumSize(QSize(0, 70));

        verticalLayout_7->addWidget(edit);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);


        horizontalLayout_3->addLayout(verticalLayout_7);

        horizontalSpacer_4 = new QSpacerItem(90, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(60, -1, 60, -1);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        search = new QPushButton(menu);
        search->setObjectName(QString::fromUtf8("search"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(search->sizePolicy().hasHeightForWidth());
        search->setSizePolicy(sizePolicy2);
        search->setMinimumSize(QSize(0, 70));
        search->setSizeIncrement(QSize(0, 9));

        verticalLayout_6->addWidget(search);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        show_all = new QPushButton(menu);
        show_all->setObjectName(QString::fromUtf8("show_all"));
        show_all->setMinimumSize(QSize(0, 70));

        verticalLayout_6->addWidget(show_all);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        categories = new QPushButton(menu);
        categories->setObjectName(QString::fromUtf8("categories"));
        categories->setMinimumSize(QSize(0, 70));

        verticalLayout_6->addWidget(categories);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_8);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalWidget = new QWidget(menu);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(11);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy3);
        horizontalWidget->setMinimumSize(QSize(795, 100));
        horizontalWidget->setSizeIncrement(QSize(200, 400));
        horizontalLayout_4 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(270, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        borrow = new QPushButton(horizontalWidget);
        borrow->setObjectName(QString::fromUtf8("borrow"));
        borrow->setMinimumSize(QSize(0, 70));

        horizontalLayout_4->addWidget(borrow);

        horizontalSpacer_3 = new QSpacerItem(270, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addWidget(horizontalWidget);


        verticalLayout_3->addLayout(verticalLayout_4);


        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QWidget *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "Form", nullptr));
        pushButton->setText(QString());
        add->setText(QApplication::translate("menu", "Add new book", nullptr));
        delete_2->setText(QApplication::translate("menu", "Delete a book", nullptr));
        edit->setText(QApplication::translate("menu", "Edit a book", nullptr));
        search->setText(QApplication::translate("menu", "Search", nullptr));
        show_all->setText(QApplication::translate("menu", "show all of the books", nullptr));
        categories->setText(QApplication::translate("menu", "categories", nullptr));
        borrow->setText(QApplication::translate("menu", "borrow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
