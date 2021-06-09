#include "add_to_category.h"
#include "ui_add_to_category.h"

add_to_category::add_to_category(QList <book> blist , QList <category> clist , QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_to_category)
{
    ui->setupUi(this);
    this->booklist = blist ;
    this->catlist = clist ;
}

add_to_category::~add_to_category()
{
    delete ui;
}

void add_to_category::on_close_clicked()
{
    this->close() ;
}

void add_to_category::on_reload_clicked()
{
    this->ui->category_name->clear();
    this->ui->book_name->clear();
    this->ui->textBrowser_3->clear();
}

void add_to_category::on_back_clicked()
{
    this->close();
    categories *f = new categories( catlist );
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void add_to_category::on_add_clicked()
{
    for(int i=0 ; i<catlist.size() ; i++ ){
        if(this->ui->category_name->text() == catlist[i].category_name)
            catlist[i].book_name.append(this->ui->book_name->text()) ;
    }

    this->ui->textBrowser_3->append("The book was added to category.") ;
}
