#include "categories.h"
#include "ui_categories.h"

categories::categories( QList <book> list , QWidget *parent) :
    QWidget(parent),
    ui(new Ui::categories)
{
    this->booklist = list ;
    QList <category> clist;
    this->catlist = clist ;
    ui->setupUi(this);
}

categories::categories( QList<category> clist , QWidget *parent) :
    QWidget(parent),
    ui(new Ui::categories)
{
    this->catlist = clist ;
    ui->setupUi(this);
}


categories::~categories()
{
    delete ui;
}

void categories::on_close_clicked()
{
    this->close() ;
}

void categories::on_back_clicked()
{
    this->hide();
    menu *f = new menu(booklist);
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void categories::on_creat_new_category_clicked()
{
    this->close();
    creat_new_category *f = new creat_new_category(catlist);
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void categories::on_add_to_category_clicked()
{
    this->close();
    add_to_category *f = new add_to_category(booklist , catlist);
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void categories::on_search_category_clicked()
{
    this->close();
    search_category *f = new search_category();
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void categories::on_show_category_clicked()
{
    this->close();
    show_category *f = new show_category();
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}
