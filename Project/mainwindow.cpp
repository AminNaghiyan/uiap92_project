#include "mainwindow.h"
#include "ui_mainwindow.h"
#define user_pass "user_pass"
#define books "books.txt"

MainWindow::MainWindow(QList <book> list , QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->booklist=list ;

    ui->setupUi(this);

    QFile file(books) ;
    file.open(QFile::Text | QFile::ReadOnly) ;
    QTextStream in (&file);
    if (file.size()!=0){
        while (!in.atEnd()) {
            book b ;
            QString qsl= in.readLine();
            b.name=qsl ;
            qsl= in.readLine();
            b.athor=qsl ;
            qsl= in.readLine();
            b.publisher=qsl ;
            qsl= in.readLine();
            b.year_of_publication=qsl ;

            this->booklist.append(b) ;
        }
    }
    file.close() ;
}

MainWindow::~MainWindow()
{
    delete ui;
}
QList <book> booklist ;

void MainWindow::on_close_clicked()
{
    this->close();
}

void MainWindow::on_reload_clicked()
{
    this->ui->username->clear();
    this->ui->password->clear();
}

void MainWindow::on_sign_up_clicked()
{
    QFile file(user_pass) ;
    file.open(QIODevice::WriteOnly | QIODevice::Append) ;
    QTextStream qts(&file);
    qts << this->ui->username->text() + '\n' ;
    qts << this->ui->password->text() + '\n' ;
    file.close() ;

    this->ui->textBrowser->clear();
    this->ui->textBrowser->append("You have signed up.");
}

void MainWindow::on_Login_clicked()
{
    QFile file(user_pass) ;
    file.open(QFile::Text | QFile::ReadOnly) ;
    QTextStream in (&file);
    bool mmd=false ;
    while (!in.atEnd()) {
        QString qsl= in.readLine();
        if(qsl==this->ui->username->text()){
            qsl= in.readLine();

            if(qsl == this->ui->password->text()){
                this->hide();

                menu *f = new menu(booklist);
                f->setAttribute(Qt::WA_DeleteOnClose);
                f->show();
                mmd=true ;
            }
        }
    }

    if(mmd==false){
        this->ui->textBrowser->clear();
        this->ui->textBrowser->append("Incorrect username or password.");
    }

    file.close() ;

}
