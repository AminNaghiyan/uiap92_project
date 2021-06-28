/********************************************************************************
** Form generated from reading UI file 'search_category.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_CATEGORY_H
#define UI_SEARCH_CATEGORY_H

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

class Ui_search_category
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QWidget *top;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *reload;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *close;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *category_name;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *search;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QTextBrowser *textBrowser_2;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *search_category)
    {
        if (search_category->objectName().isEmpty())
            search_category->setObjectName(QString::fromUtf8("search_category"));
        search_category->resize(800, 811);
        search_category->setMinimumSize(QSize(60, 0));
        search_category->setStyleSheet(QString::fromUtf8("#search_category\n"
"{\n"
"background-color : rgb(14, 22, 33)\n"
"}\n"
"\n"
"#top\n"
"{\n"
"background-color : rgb(107, 107, 107)\n"
"}\n"
"\n"
"#back::hover\n"
"{\n"
"	background-color: rgb(206, 206, 206);\n"
"}\n"
"\n"
"#back\n"
"{\n"
"background-color : rgb(140, 140, 140) ;\n"
"border-color: rgb(0, 0, 0);\n"
"}\n"
"#close\n"
"{\n"
"background-color : rgb(140, 140, 140) ;\n"
"}\n"
"\n"
"#close::hover\n"
"{\n"
"background-color : red \n"
"}\n"
"\n"
"#reload::hover\n"
"{\n"
"	background-color: rgb(206, 206, 206);\n"
"}\n"
"\n"
"#reload\n"
"{\n"
"background-color : rgb(140, 140, 140) ;\n"
"border-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"#textBrowser\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(39, 104, 153);\n"
"}\n"
"\n"
"#category_name\n"
"{\n"
"color: rgb(79, 59, 33);\n"
"background-color : rgb(176, 196, 222)\n"
"}\n"
"\n"
"#search\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"MS Shell Dlg 2\";\n"
"    background-color: rgb(39, 104, 153) ;\n"
"}\n"
"\n"
"#textBrowser_2\n"
"{\n"
"	fon"
                        "t: 10pt \"MS Shell Dlg 2\";\n"
"    color: rgb(79, 59, 33);\n"
"    background-color : #f1e9de\n"
"}"));
        verticalLayout = new QVBoxLayout(search_category);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        top = new QWidget(search_category);
        top->setObjectName(QString::fromUtf8("top"));
        horizontalLayout = new QHBoxLayout(top);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 1, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        back = new QPushButton(top);
        back->setObjectName(QString::fromUtf8("back"));
        back->setMinimumSize(QSize(60, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon);
        back->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(back);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        reload = new QPushButton(top);
        reload->setObjectName(QString::fromUtf8("reload"));
        reload->setMinimumSize(QSize(60, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        reload->setIcon(icon1);
        reload->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(reload);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        close = new QPushButton(top);
        close->setObjectName(QString::fromUtf8("close"));
        close->setMinimumSize(QSize(60, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon2);
        close->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(close);


        verticalLayout_2->addWidget(top);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        textBrowser = new QTextBrowser(search_category);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMaximumSize(QSize(16777215, 53));

        horizontalLayout_2->addWidget(textBrowser);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        category_name = new QLineEdit(search_category);
        category_name->setObjectName(QString::fromUtf8("category_name"));
        category_name->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(category_name);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        search = new QPushButton(search_category);
        search->setObjectName(QString::fromUtf8("search"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(search->sizePolicy().hasHeightForWidth());
        search->setSizePolicy(sizePolicy1);
        search->setMinimumSize(QSize(100, 68));

        horizontalLayout_5->addWidget(search);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_8 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        textBrowser_2 = new QTextBrowser(search_category);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        sizePolicy1.setHeightForWidth(textBrowser_2->sizePolicy().hasHeightForWidth());
        textBrowser_2->setSizePolicy(sizePolicy1);
        textBrowser_2->setMinimumSize(QSize(450, 400));
        textBrowser_2->setMaximumSize(QSize(450, 400));

        horizontalLayout_4->addWidget(textBrowser_2);

        horizontalSpacer_9 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(search_category);

        QMetaObject::connectSlotsByName(search_category);
    } // setupUi

    void retranslateUi(QWidget *search_category)
    {
        search_category->setWindowTitle(QApplication::translate("search_category", "Form", nullptr));
        back->setText(QString());
        reload->setText(QString());
        close->setText(QString());
        textBrowser->setHtml(QApplication::translate("search_category", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.05594pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Enter the name of the category you are looking for.</span></p></body></html>", nullptr));
        search->setText(QApplication::translate("search_category", "Search", nullptr));
        textBrowser_2->setHtml(QApplication::translate("search_category", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.05594pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search_category: public Ui_search_category {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_CATEGORY_H
