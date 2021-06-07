#include "add.h"
#include "ui_add.h"
#define books "books.txt"

add::add(QWidget *parent ) :
    QWidget(parent),
    ui(new Ui::add)
{
    ui->setupUi(this);
}

add:: add(QList<book> list,QWidget *parent):
    QWidget(parent),
    ui(new Ui::add)
{
    ui->setupUi(this);
    this->booklist=list ;
}

add::~add()
{
    delete ui;
}


void add::on_close_clicked()
{
    this->close() ;
}

void add::on_reload_clicked()
{
    this->ui->name->clear() ;
    this->ui->author->clear() ;
    this->ui->publisher->clear() ;
    this->ui->year_of_publication->clear() ;
    this->ui->textBrowser_3->clear() ;
}

void add::on_pushButton_clicked()
{
    this->close();
    menu *f=new menu ;
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void add::on_add_2_clicked()
{
    book w;

    w.name = this->ui->name->text() ;
    w.athor = this->ui->author->text() ;
    w.publisher = this->ui->publisher->text();
    w.year_of_publication = this->ui->year_of_publication->text() ;

    booklist.append(w) ;

    this->ui->textBrowser_3->append("The book was added.") ;
}
