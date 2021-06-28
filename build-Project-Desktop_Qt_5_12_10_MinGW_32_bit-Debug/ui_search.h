/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QWidget *top;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *reload;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *close;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_22;
    QWidget *specification;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_25;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *name;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *athor;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *publisher;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_16;
    QLineEdit *year_of_publication;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_19;
    QTextBrowser *textBrowser_2;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *verticalSpacer_10;

    void setupUi(QWidget *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName(QString::fromUtf8("search"));
        search->resize(1000, 1000);
        search->setStyleSheet(QString::fromUtf8("#search\n"
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
"#specification\n"
"{\n"
"	background-color: rgb(218, 165, 32);\n"
"}\n"
"#name\n"
"{\n"
"	color: rgb(79, 59, 33);\n"
"background-color : rgb(176, 196, 222)\n"
"}\n"
"\n"
"#athor\n"
"{\n"
"background-color : rgb(176, 196, 222) ;\n"
"color: rgb(79, 59, 33);\n"
"}\n"
"\n"
"#publisher\n"
"{"
                        "\n"
"color: rgb(79, 59, 33);\n"
"background-color : rgb(176, 196, 222) ;\n"
"}\n"
"\n"
"#year_of_publication\n"
"{\n"
"color: rgb(79, 59, 33);\n"
"background-color : rgb(176, 196, 222) ;\n"
"}\n"
"\n"
"#pushButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(39, 104, 153) ;\n"
"}\n"
"#pushButton::hover\n"
"{\n"
"background-color : #008080\n"
"}\n"
"\n"
"#textBrowser_2\n"
"{\n"
"	background-color: #f1e9de;\n"
"	color: rgb(178, 34, 34);\n"
"	font: 10pt \"MS Shell Dlg 2\";\n"
"}"));
        verticalLayout = new QVBoxLayout(search);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        top = new QWidget(search);
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
        back->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(back);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_21);

        reload = new QPushButton(top);
        reload->setObjectName(QString::fromUtf8("reload"));
        reload->setMinimumSize(QSize(60, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        reload->setIcon(icon1);
        reload->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(reload);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        close = new QPushButton(top);
        close->setObjectName(QString::fromUtf8("close"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(60);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(close->sizePolicy().hasHeightForWidth());
        close->setSizePolicy(sizePolicy);
        close->setMinimumSize(QSize(60, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon2);
        close->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(close);


        verticalLayout_2->addWidget(top);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(170, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        textBrowser = new QTextBrowser(search);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        textBrowser->setMaximumSize(QSize(607, 60));

        horizontalLayout_2->addWidget(textBrowser);

        horizontalSpacer_4 = new QSpacerItem(170, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, -1);
        horizontalSpacer_22 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_22);

        specification = new QWidget(search);
        specification->setObjectName(QString::fromUtf8("specification"));
        verticalLayout_4 = new QVBoxLayout(specification);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 1, -1, -1);
        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_25 = new QSpacerItem(208, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_25);

        label = new QLabel(specification);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_10->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        name = new QLineEdit(specification);
        name->setObjectName(QString::fromUtf8("name"));
        name->setMinimumSize(QSize(0, 35));
        name->setMaximumSize(QSize(16777215, 35));

        horizontalLayout_10->addWidget(name);

        horizontalSpacer_24 = new QSpacerItem(208, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_24);


        verticalLayout_4->addLayout(horizontalLayout_10);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_5);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_5 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_5);

        label_2 = new QLabel(specification);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_17->addWidget(label_2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_10);

        athor = new QLineEdit(specification);
        athor->setObjectName(QString::fromUtf8("athor"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(athor->sizePolicy().hasHeightForWidth());
        athor->setSizePolicy(sizePolicy2);
        athor->setMinimumSize(QSize(0, 35));
        athor->setMaximumSize(QSize(16777215, 35));

        horizontalLayout_17->addWidget(athor);

        horizontalSpacer_6 = new QSpacerItem(208, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_17);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_8 = new QSpacerItem(183, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        label_3 = new QLabel(specification);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_13);

        publisher = new QLineEdit(specification);
        publisher->setObjectName(QString::fromUtf8("publisher"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(publisher->sizePolicy().hasHeightForWidth());
        publisher->setSizePolicy(sizePolicy3);
        publisher->setMinimumSize(QSize(0, 35));
        publisher->setMaximumSize(QSize(16777215, 35));

        horizontalLayout_4->addWidget(publisher);

        horizontalSpacer_9 = new QSpacerItem(208, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_11 = new QSpacerItem(113, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        label_4 = new QLabel(specification);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_16);

        year_of_publication = new QLineEdit(specification);
        year_of_publication->setObjectName(QString::fromUtf8("year_of_publication"));
        year_of_publication->setMinimumSize(QSize(0, 35));
        year_of_publication->setMaximumSize(QSize(16777215, 35));

        horizontalLayout_5->addWidget(year_of_publication);

        horizontalSpacer_12 = new QSpacerItem(208, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_9->addWidget(specification);

        horizontalSpacer_23 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_23);


        verticalLayout_3->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(verticalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_17);

        pushButton = new QPushButton(search);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(200);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);
        pushButton->setMinimumSize(QSize(150, 60));

        horizontalLayout_7->addWidget(pushButton);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_18);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalSpacer_8 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_19);

        textBrowser_2 = new QTextBrowser(search);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(40);
        sizePolicy5.setHeightForWidth(textBrowser_2->sizePolicy().hasHeightForWidth());
        textBrowser_2->setSizePolicy(sizePolicy5);
        textBrowser_2->setMinimumSize(QSize(500, 400));

        horizontalLayout_8->addWidget(textBrowser_2);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_20);


        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_10);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QWidget *search)
    {
        search->setWindowTitle(QApplication::translate("search", "Form", nullptr));
        back->setText(QString());
        reload->setText(QString());
        close->setText(QString());
        textBrowser->setHtml(QApplication::translate("search", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.05594pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Enter the specification of the book you want</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("search", "Name :", nullptr));
        label_2->setText(QApplication::translate("search", "Author :", nullptr));
        label_3->setText(QApplication::translate("search", "Publisher :", nullptr));
        label_4->setText(QApplication::translate("search", "Year of publication :", nullptr));
        pushButton->setText(QApplication::translate("search", "Search", nullptr));
        textBrowser_2->setHtml(QApplication::translate("search", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
