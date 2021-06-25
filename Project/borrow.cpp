#include "borrow.h"
#include "ui_borrow.h"
#define borrow_file "borrow_file.txt"

void borrow :: write( QList<borrow_class> borrowlist){

    this->ui->textBrowser->clear() ;
    for (auto i=borrowlist.begin() ; i!=borrowlist.end() ; i++){
        this->ui->textBrowser->append("bookname: " + (*i).bookname + '\n') ;
        this->ui->textBrowser->append("borrowed by : " + (*i).username + '\n') ;
        this->ui->textBrowser->append("________________________\n") ;
    }

}

borrow::borrow(QList<book> list, QList<borrow_class> blist, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::borrow)
{
    this->booklist = list ;
    this->borrowlist = blist ;
    ui->setupUi(this);

    QFile file(borrow_file) ;
    file.open(QFile::Text | QFile::ReadOnly) ;
    QTextStream in (&file);
    if (file.size()!=0){
        while (!in.atEnd()) {
            borrow_class b ;
            QString qsl= in.readLine();
            b.bookname=qsl ;
            qsl= in.readLine();
            b.username=qsl ;

            this->borrowlist.append(b) ;
        }
    }
    file.close() ;

    write(borrowlist) ;
}

borrow::~borrow()
{
    delete ui;
}

void borrow::on_close_clicked()
{
    this->close() ;
}

void borrow::on_reload_clicked()
{
    this->ui->bookname->clear() ;
    this->ui->username->clear() ;
    this->ui->textBrowser_3->clear() ;
}

void borrow::on_back_clicked()
{
    this->close();
    menu *f=new menu(booklist) ;
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void borrow::on_borrow_2_clicked()
{
    borrow_class c ;
    c.bookname = this->ui->bookname->text() ;
    c.username = this->ui->username->text() ;
    borrowlist.append(c) ;

    QFile file(borrow_file) ;
    file.open(QFile :: Text | QFile :: WriteOnly);
    QTextStream qts(&file) ;
    for(int i=0 ; i<borrowlist.size() ; i++){
        qts << borrowlist[i].bookname + '\n' ;
        qts << borrowlist[i].username + '\n' ;
    }
    file.close() ;

    this->ui->textBrowser_3->clear() ;
    this->ui->textBrowser_3->append("the book was borrowed.") ;

    write(borrowlist) ;
}
