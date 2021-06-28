/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

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

class Ui_add
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *addwin;
    QVBoxLayout *verticalLayout_2;
    QWidget *top;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *reload;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *close;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_21;
    QWidget *specification;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QLineEdit *name;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_2;
    QLineEdit *author;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_23;
    QLabel *label_3;
    QLineEdit *publisher;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lable_10;
    QLineEdit *year_of_publication;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *add_2;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_18;
    QTextBrowser *textBrowser_3;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *add)
    {
        if (add->objectName().isEmpty())
            add->setObjectName(QString::fromUtf8("add"));
        add->resize(800, 876);
        add->setStyleSheet(QString::fromUtf8("#addwin\n"
"{\n"
"background-color : rgb(14, 22, 33)\n"
"}\n"
"\n"
"#top\n"
"{\n"
"background-color : rgb(107, 107, 107)\n"
"}\n"
"\n"
"#pushButton::hover\n"
"{\n"
"	background-color: rgb(206, 206, 206);\n"
"}\n"
"\n"
"#pushButton\n"
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
"	background-color: rgb(233, 150, 122);\n"
"}\n"
"#textBrowser_2\n"
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
"#author\n"
"{\n"
"background-c"
                        "olor : rgb(176, 196, 222) ;\n"
"color: rgb(79, 59, 33);\n"
"}\n"
"\n"
"#publisher\n"
"{\n"
"color: rgb(79, 59, 33);\n"
"background-color : rgb(176, 196, 222) ;\n"
"}\n"
"\n"
"#year_of_publication\n"
"{\n"
"color: rgb(79, 59, 33);\n"
"background-color : rgb(176, 196, 222) ;\n"
"}\n"
"#add_2\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(39, 104, 153) ;\n"
"}\n"
"#add_2::hover\n"
"{\n"
"background-color : #008080\n"
"}\n"
"#textBrowser_3\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(178, 34, 34);\n"
"	font: 10pt \"MS Shell Dlg 2\";\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(add);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        addwin = new QWidget(add);
        addwin->setObjectName(QString::fromUtf8("addwin"));
        verticalLayout_2 = new QVBoxLayout(addwin);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 1, -1, 1);
        top = new QWidget(addwin);
        top->setObjectName(QString::fromUtf8("top"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(top->sizePolicy().hasHeightForWidth());
        top->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(top);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(top);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(60, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_17);

        reload = new QPushButton(top);
        reload->setObjectName(QString::fromUtf8("reload"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(60);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(reload->sizePolicy().hasHeightForWidth());
        reload->setSizePolicy(sizePolicy1);
        reload->setMinimumSize(QSize(60, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        reload->setIcon(icon1);
        reload->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(reload);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_15);

        close = new QPushButton(top);
        close->setObjectName(QString::fromUtf8("close"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(close->sizePolicy().hasHeightForWidth());
        close->setSizePolicy(sizePolicy2);
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
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        textBrowser = new QTextBrowser(addwin);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(60);
        sizePolicy3.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy3);
        textBrowser->setMinimumSize(QSize(0, 60));
        textBrowser->setMaximumSize(QSize(400, 60));

        horizontalLayout_2->addWidget(textBrowser);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, -1);
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_21);

        specification = new QWidget(addwin);
        specification->setObjectName(QString::fromUtf8("specification"));
        verticalLayout_4 = new QVBoxLayout(specification);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 10, -1, 10);
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_6);

        label = new QLabel(specification);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_11->addWidget(label);

        name = new QLineEdit(specification);
        name->setObjectName(QString::fromUtf8("name"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy4);
        name->setMinimumSize(QSize(0, 35));
        name->setMaximumSize(QSize(16777215, 35));

        horizontalLayout_11->addWidget(name);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_11);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_8);

        label_2 = new QLabel(specification);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_12->addWidget(label_2);

        author = new QLineEdit(specification);
        author->setObjectName(QString::fromUtf8("author"));
        author->setMinimumSize(QSize(0, 35));
        author->setMaximumSize(QSize(16777215, 35));

        horizontalLayout_12->addWidget(author);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_9);


        verticalLayout_4->addLayout(horizontalLayout_12);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_10);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_23);

        label_3 = new QLabel(specification);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_13->addWidget(label_3);

        publisher = new QLineEdit(specification);
        publisher->setObjectName(QString::fromUtf8("publisher"));
        publisher->setMinimumSize(QSize(0, 35));
        publisher->setMaximumSize(QSize(16777215, 35));

        horizontalLayout_13->addWidget(publisher);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_22);


        verticalLayout_4->addLayout(horizontalLayout_13);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_11);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_4 = new QSpacerItem(113, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        lable_10 = new QLabel(specification);
        lable_10->setObjectName(QString::fromUtf8("lable_10"));

        horizontalLayout_3->addWidget(lable_10);

        year_of_publication = new QLineEdit(specification);
        year_of_publication->setObjectName(QString::fromUtf8("year_of_publication"));
        year_of_publication->setMinimumSize(QSize(0, 35));
        year_of_publication->setMaximumSize(QSize(16777215, 35));

        horizontalLayout_3->addWidget(year_of_publication);

        horizontalSpacer_5 = new QSpacerItem(194, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);


        horizontalLayout_10->addWidget(specification);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);


        verticalLayout_2->addLayout(horizontalLayout_10);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);

        add_2 = new QPushButton(addwin);
        add_2->setObjectName(QString::fromUtf8("add_2"));
        sizePolicy2.setHeightForWidth(add_2->sizePolicy().hasHeightForWidth());
        add_2->setSizePolicy(sizePolicy2);
        add_2->setMinimumSize(QSize(100, 60));
        add_2->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_8->addWidget(add_2);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_9);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_18);

        textBrowser_3 = new QTextBrowser(addwin);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        sizePolicy2.setHeightForWidth(textBrowser_3->sizePolicy().hasHeightForWidth());
        textBrowser_3->setSizePolicy(sizePolicy2);
        textBrowser_3->setMinimumSize(QSize(50, 0));
        textBrowser_3->setMaximumSize(QSize(16777215, 50));

        horizontalLayout_9->addWidget(textBrowser_3);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_19);


        verticalLayout_3->addLayout(horizontalLayout_9);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);


        verticalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addWidget(addwin);


        retranslateUi(add);

        QMetaObject::connectSlotsByName(add);
    } // setupUi

    void retranslateUi(QWidget *add)
    {
        add->setWindowTitle(QApplication::translate("add", "Form", nullptr));
        pushButton->setText(QString());
        reload->setText(QString());
        close->setText(QString());
        textBrowser->setHtml(QApplication::translate("add", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.05594pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Add menu</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("add", "Name :", nullptr));
        label_2->setText(QApplication::translate("add", "Author :", nullptr));
        label_3->setText(QApplication::translate("add", "Publisher :", nullptr));
        lable_10->setText(QApplication::translate("add", "Year of publication :", nullptr));
        add_2->setText(QApplication::translate("add", "Add", nullptr));
        textBrowser_3->setHtml(QApplication::translate("add", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.05594pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add: public Ui_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
