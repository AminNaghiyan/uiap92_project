/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

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

class Ui_edit
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QWidget *top;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *close_2;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *close;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QTextBrowser *textBrowser_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *old_name;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QTextBrowser *textBrowser_3;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_22;
    QWidget *specification;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QLineEdit *new_name;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_2;
    QLineEdit *new_athor;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_3;
    QLineEdit *new_pub;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_24;
    QLabel *label_4;
    QLineEdit *new_year;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *edit_2;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_17;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer_20;

    void setupUi(QWidget *edit)
    {
        if (edit->objectName().isEmpty())
            edit->setObjectName(QString::fromUtf8("edit"));
        edit->resize(800, 750);
        edit->setStyleSheet(QString::fromUtf8("#edit\n"
"{\n"
"background-color : rgb(14, 22, 33)\n"
"}\n"
"\n"
"#top\n"
"{\n"
"background-color : rgb(107, 107, 107)\n"
"}\n"
"\n"
"#close_2::hover\n"
"{\n"
"	background-color: rgb(206, 206, 206);\n"
"}\n"
"\n"
"#close_2\n"
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
"\n"
"#specification\n"
"{\n"
"	background-color: rgb(218, 165, 32);\n"
"}\n"
"#new_name\n"
"{\n"
"	color: rgb(79, 59, 33);\n"
"background-color : rgb(176, 196, 222)\n"
"}\n"
"\n"
"#new_athor\n"
"{\n"
"background-color : rgb(176, 196, 222) ;\n"
"color: rgb(79, 59, 33);\n"
"}\n"
"\n"
"#new_pub\n"
"{\n"
"color: rgb(79, 59, 33);\n"
"background-color : rgb(176, 196, 222) ;\n"
"}\n"
"\n"
"#n"
                        "ew_year\n"
"{\n"
"color: rgb(79, 59, 33);\n"
"background-color : rgb(176, 196, 222) ;\n"
"}\n"
"#old_name\n"
"{\n"
"color: rgb(79, 59, 33);\n"
"background-color : rgb(176, 196, 222) ;\n"
"}\n"
"\n"
"#textBrowser_2\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(39, 104, 153);\n"
"}\n"
"\n"
"#textBrowser_3\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(39, 104, 153);\n"
"}\n"
"#edit_2\n"
"{\n"
"    color: rgb(255, 255, 255);\n"
"	background-color: rgb(39, 104, 153);\n"
"}\n"
"\n"
"#edit_2::hover\n"
"{\n"
"    background-color : #008080\n"
"}\n"
"\n"
"#textBrowser\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(178, 34, 34);\n"
"	font: 10pt \"MS Shell Dlg 2\";\n"
"}"));
        verticalLayout = new QVBoxLayout(edit);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 10);
        top = new QWidget(edit);
        top->setObjectName(QString::fromUtf8("top"));
        horizontalLayout = new QHBoxLayout(top);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 1, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close_2 = new QPushButton(top);
        close_2->setObjectName(QString::fromUtf8("close_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(close_2->sizePolicy().hasHeightForWidth());
        close_2->setSizePolicy(sizePolicy);
        close_2->setMinimumSize(QSize(60, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        close_2->setIcon(icon);
        close_2->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(close_2);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_21);

        pushButton = new QPushButton(top);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(60, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        close = new QPushButton(top);
        close->setObjectName(QString::fromUtf8("close"));
        sizePolicy.setHeightForWidth(close->sizePolicy().hasHeightForWidth());
        close->setSizePolicy(sizePolicy);
        close->setMinimumSize(QSize(60, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon2);
        close->setIconSize(QSize(23, 23));

        horizontalLayout->addWidget(close);


        verticalLayout_2->addWidget(top);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_5 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        textBrowser_2 = new QTextBrowser(edit);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        sizePolicy.setHeightForWidth(textBrowser_2->sizePolicy().hasHeightForWidth());
        textBrowser_2->setSizePolicy(sizePolicy);
        textBrowser_2->setMaximumSize(QSize(543, 50));

        horizontalLayout_3->addWidget(textBrowser_2);

        horizontalSpacer_6 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        old_name = new QLineEdit(edit);
        old_name->setObjectName(QString::fromUtf8("old_name"));
        old_name->setMinimumSize(QSize(0, 41));
        old_name->setMaximumSize(QSize(16777215, 63));

        horizontalLayout_4->addWidget(old_name);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_9 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        textBrowser_3 = new QTextBrowser(edit);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        sizePolicy.setHeightForWidth(textBrowser_3->sizePolicy().hasHeightForWidth());
        textBrowser_3->setSizePolicy(sizePolicy);
        textBrowser_3->setMaximumSize(QSize(598, 50));

        horizontalLayout_5->addWidget(textBrowser_3);

        horizontalSpacer_10 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 10, 0, -1);
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_22);

        specification = new QWidget(edit);
        specification->setObjectName(QString::fromUtf8("specification"));
        verticalLayout_4 = new QVBoxLayout(specification);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 1, -1, 1);
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_3);

        label = new QLabel(specification);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_12->addWidget(label);

        new_name = new QLineEdit(specification);
        new_name->setObjectName(QString::fromUtf8("new_name"));
        new_name->setMinimumSize(QSize(0, 35));

        horizontalLayout_12->addWidget(new_name);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_12);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        label_2 = new QLabel(specification);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        new_athor = new QLineEdit(specification);
        new_athor->setObjectName(QString::fromUtf8("new_athor"));
        new_athor->setMinimumSize(QSize(0, 35));

        horizontalLayout_2->addWidget(new_athor);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_15 = new QSpacerItem(161, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_15);

        label_3 = new QLabel(specification);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        new_pub = new QLineEdit(specification);
        new_pub->setObjectName(QString::fromUtf8("new_pub"));
        new_pub->setMinimumSize(QSize(0, 35));

        horizontalLayout_6->addWidget(new_pub);

        horizontalSpacer_16 = new QSpacerItem(187, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_16);


        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_24 = new QSpacerItem(95, 11, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_24);

        label_4 = new QLabel(specification);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        new_year = new QLineEdit(specification);
        new_year->setObjectName(QString::fromUtf8("new_year"));
        new_year->setMinimumSize(QSize(0, 37));

        horizontalLayout_7->addWidget(new_year);

        horizontalSpacer_18 = new QSpacerItem(187, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_18);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);


        horizontalLayout_11->addWidget(specification);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_23);


        verticalLayout_2->addLayout(horizontalLayout_11);

        verticalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_9);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        edit_2 = new QPushButton(edit);
        edit_2->setObjectName(QString::fromUtf8("edit_2"));
        sizePolicy.setHeightForWidth(edit_2->sizePolicy().hasHeightForWidth());
        edit_2->setSizePolicy(sizePolicy);
        edit_2->setMinimumSize(QSize(100, 50));
        edit_2->setMaximumSize(QSize(200, 50));

        horizontalLayout_9->addWidget(edit_2);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_17 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_17);

        textBrowser = new QTextBrowser(edit);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMaximumSize(QSize(400, 50));

        horizontalLayout_10->addWidget(textBrowser);

        horizontalSpacer_20 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);


        verticalLayout_2->addLayout(horizontalLayout_10);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(edit);

        QMetaObject::connectSlotsByName(edit);
    } // setupUi

    void retranslateUi(QWidget *edit)
    {
        edit->setWindowTitle(QApplication::translate("edit", "Form", nullptr));
        close_2->setText(QString());
        pushButton->setText(QString());
        close->setText(QString());
        textBrowser_2->setHtml(QApplication::translate("edit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.05594pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Enter name of the book you want to edit</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QApplication::translate("edit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.05594pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Now enter the new specifications of the book</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("edit", "New name :", nullptr));
        label_2->setText(QApplication::translate("edit", "New athor :", nullptr));
        label_3->setText(QApplication::translate("edit", "New publisher :", nullptr));
        label_4->setText(QApplication::translate("edit", "New year of publication :", nullptr));
        edit_2->setText(QApplication::translate("edit", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit: public Ui_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
