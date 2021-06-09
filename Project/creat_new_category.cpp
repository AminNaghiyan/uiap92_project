#include "creat_new_category.h"
#include "ui_creat_new_category.h"

creat_new_category::creat_new_category( QList <category> clist , QWidget *parent) :
    QWidget(parent),
    ui(new Ui::creat_new_category)
{
    this->catlist= clist ;
    ui->setupUi(this);
}

creat_new_category::~creat_new_category()
{
    delete ui;
}

void creat_new_category::on_close_clicked()
{
    this->close() ;
}

void creat_new_category::on_reload_clicked()
{
    this->ui->category_name->clear() ;
    this->ui->textBrowser_2->clear() ;
}

void creat_new_category::on_back_clicked()
{
    this->close();
    categories *f = new categories( catlist );
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();

}

void creat_new_category::on_add_category_clicked()
{
    category w ;
    w.category_name=this->ui-> category_name->text() ;
    catlist.append(w) ;

    this->ui-> textBrowser_2-> append( "The category was added" ) ;
}
