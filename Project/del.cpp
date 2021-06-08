#include "del.h"
#include "ui_del.h"

del::del(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::del)
{
    ui->setupUi(this);
}

del::del( QList<book>list , QWidget *parent) :
    QWidget(parent),
    ui(new Ui::del)
{
    ui->setupUi(this);
    this->booklist = list ;
}

del::~del()
{
    delete ui;
}

void del::on_close_clicked()
{
    this->close() ;
}

void del::on_relode_clicked()
{
    this->ui->name->clear();
    this->ui->athor->clear();
    this->ui->publisher->clear();
    this->ui->year_of_publication->clear();
    this->ui->textBrowser_3->clear();
}

void del::on_back_clicked()
{
    this->close();
    menu *f = new menu(booklist);
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void del::on_delete_2_clicked()
{
    book w;

    w.name = this->ui->name->text() ;
    w.athor = this->ui->athor->text() ;
    w.publisher = this->ui->publisher->text();
    w.year_of_publication = this->ui->year_of_publication->text() ;

    for(int i=0 ; i<booklist.size() ; i++ ){
        if(booklist[i]==w)
              booklist.removeAt(i) ;
    }

    (ctfile(booklist)) ;

    this->ui->textBrowser_3->append("The book was deleted.") ;
}
