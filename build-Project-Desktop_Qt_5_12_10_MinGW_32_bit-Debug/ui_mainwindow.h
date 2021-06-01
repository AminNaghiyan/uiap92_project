/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *reload;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *close;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_9;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_4;
    QWidget *horizontalWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *username;
    QWidget *horizontalWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *password;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *sign_up;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *Login;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 592);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 5, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        reload = new QPushButton(centralwidget);
        reload->setObjectName(QString::fromUtf8("reload"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(55);
        sizePolicy.setVerticalStretch(30);
        sizePolicy.setHeightForWidth(reload->sizePolicy().hasHeightForWidth());
        reload->setSizePolicy(sizePolicy);
        reload->setMinimumSize(QSize(60, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        reload->setIcon(icon);

        horizontalLayout->addWidget(reload);

        horizontalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        close = new QPushButton(centralwidget);
        close->setObjectName(QString::fromUtf8("close"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(70);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(close->sizePolicy().hasHeightForWidth());
        close->setSizePolicy(sizePolicy1);
        close->setMinimumSize(QSize(60, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon1);

        horizontalLayout->addWidget(close);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 40, 0, 0);
        horizontalSpacer_9 = new QSpacerItem(200, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        verticalWidget_2 = new QWidget(centralwidget);
        verticalWidget_2->setObjectName(QString::fromUtf8("verticalWidget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(200);
        sizePolicy2.setVerticalStretch(100);
        sizePolicy2.setHeightForWidth(verticalWidget_2->sizePolicy().hasHeightForWidth());
        verticalWidget_2->setSizePolicy(sizePolicy2);
        verticalWidget_2->setMinimumSize(QSize(0, 40));
        verticalLayout_9 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 1, -1, -1);
        label_3 = new QLabel(verticalWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(10);
        sizePolicy3.setVerticalStretch(10);
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setMinimumSize(QSize(10, 10));
        QFont font;
        font.setStrikeOut(false);
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_9->addWidget(label_3);


        horizontalLayout_9->addWidget(verticalWidget_2);

        horizontalSpacer_10 = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        verticalWidget = new QWidget(centralwidget);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy4);
        verticalWidget->setMinimumSize(QSize(200, 200));
        verticalLayout_7 = new QVBoxLayout(verticalWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 0, -1, 20);
        verticalSpacer_4 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_4);

        horizontalWidget_4 = new QWidget(verticalWidget);
        horizontalWidget_4->setObjectName(QString::fromUtf8("horizontalWidget_4"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(100);
        sizePolicy5.setVerticalStretch(50);
        sizePolicy5.setHeightForWidth(horizontalWidget_4->sizePolicy().hasHeightForWidth());
        horizontalWidget_4->setSizePolicy(sizePolicy5);
        horizontalWidget_4->setMinimumSize(QSize(300, 50));
        horizontalWidget_4->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_6 = new QHBoxLayout(horizontalWidget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(horizontalWidget_4);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        username = new QLineEdit(horizontalWidget_4);
        username->setObjectName(QString::fromUtf8("username"));

        horizontalLayout_6->addWidget(username);


        verticalLayout_7->addWidget(horizontalWidget_4);

        horizontalWidget_5 = new QWidget(verticalWidget);
        horizontalWidget_5->setObjectName(QString::fromUtf8("horizontalWidget_5"));
        horizontalLayout_7 = new QHBoxLayout(horizontalWidget_5);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(horizontalWidget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        password = new QLineEdit(horizontalWidget_5);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        horizontalLayout_7->addWidget(password);


        verticalLayout_7->addWidget(horizontalWidget_5);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, -1);
        sign_up = new QPushButton(verticalWidget);
        sign_up->setObjectName(QString::fromUtf8("sign_up"));

        horizontalLayout_8->addWidget(sign_up);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        Login = new QPushButton(verticalWidget);
        Login->setObjectName(QString::fromUtf8("Login"));

        horizontalLayout_8->addWidget(Login);


        verticalLayout_7->addLayout(horizontalLayout_8);


        horizontalLayout_5->addWidget(verticalWidget);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 20, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        sizePolicy4.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy4);
        textBrowser->setMinimumSize(QSize(300, 10));
        textBrowser->setMaximumSize(QSize(2000, 50));

        horizontalLayout_2->addWidget(textBrowser);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        reload->setText(QString());
        close->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Log / Sign in to library", nullptr));
        label->setText(QApplication::translate("MainWindow", "Username :", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password :", nullptr));
        sign_up->setText(QApplication::translate("MainWindow", "Sign up", nullptr));
        Login->setText(QApplication::translate("MainWindow", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
