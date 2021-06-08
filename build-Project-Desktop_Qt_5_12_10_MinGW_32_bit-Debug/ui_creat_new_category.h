/********************************************************************************
** Form generated from reading UI file 'creat_new_category.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREAT_NEW_CATEGORY_H
#define UI_CREAT_NEW_CATEGORY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_creat_new_category
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *reload;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *close;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *add_category;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *creat_new_category)
    {
        if (creat_new_category->objectName().isEmpty())
            creat_new_category->setObjectName(QString::fromUtf8("creat_new_category"));
        creat_new_category->resize(800, 600);
        verticalLayout = new QVBoxLayout(creat_new_category);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        back = new QPushButton(creat_new_category);
        back->setObjectName(QString::fromUtf8("back"));
        back->setMinimumSize(QSize(60, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon);
        back->setIconSize(QSize(50, 40));

        horizontalLayout->addWidget(back);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        reload = new QPushButton(creat_new_category);
        reload->setObjectName(QString::fromUtf8("reload"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(reload->sizePolicy().hasHeightForWidth());
        reload->setSizePolicy(sizePolicy);
        reload->setMinimumSize(QSize(60, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        reload->setIcon(icon1);
        reload->setIconSize(QSize(50, 40));

        horizontalLayout->addWidget(reload);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        close = new QPushButton(creat_new_category);
        close->setObjectName(QString::fromUtf8("close"));
        sizePolicy.setHeightForWidth(close->sizePolicy().hasHeightForWidth());
        close->setSizePolicy(sizePolicy);
        close->setMinimumSize(QSize(60, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon2);
        close->setIconSize(QSize(50, 40));

        horizontalLayout->addWidget(close);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        textBrowser = new QTextBrowser(creat_new_category);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        textBrowser->setMaximumSize(QSize(16777215, 50));

        horizontalLayout_2->addWidget(textBrowser);

        horizontalSpacer_5 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        lineEdit = new QLineEdit(creat_new_category);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 35));
        lineEdit->setMaximumSize(QSize(16777215, 35));

        horizontalLayout_3->addWidget(lineEdit);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        add_category = new QPushButton(creat_new_category);
        add_category->setObjectName(QString::fromUtf8("add_category"));
        sizePolicy.setHeightForWidth(add_category->sizePolicy().hasHeightForWidth());
        add_category->setSizePolicy(sizePolicy);
        add_category->setMinimumSize(QSize(100, 80));
        add_category->setMaximumSize(QSize(100, 100));

        horizontalLayout_4->addWidget(add_category);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(creat_new_category);

        QMetaObject::connectSlotsByName(creat_new_category);
    } // setupUi

    void retranslateUi(QWidget *creat_new_category)
    {
        creat_new_category->setWindowTitle(QApplication::translate("creat_new_category", "Form", nullptr));
        back->setText(QString());
        reload->setText(QString());
        close->setText(QString());
        textBrowser->setHtml(QApplication::translate("creat_new_category", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.05594pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Enter name of the category you want to add</span></p></body></html>", nullptr));
        add_category->setText(QApplication::translate("creat_new_category", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creat_new_category: public Ui_creat_new_category {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREAT_NEW_CATEGORY_H
