#include "categories.h"
#include "ui_categories.h"
#define category_file "category.txt"


categories::categories( QList <book> list , QWidget *parent) :
    QWidget(parent),
    ui(new Ui::categories)
{
    this->booklist = list ;
    QList <category> clist;
    this->catlist = clist ;
    ui->setupUi(this);
}

categories::categories(QList <book> list , QList<category> clist , QWidget *parent) :
    QWidget(parent),
    ui(new Ui::categories)
{
    this->booklist = list ;
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
    this->hide();
    creat_new_category *f = new creat_new_category(booklist , catlist);
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void categories::on_add_to_category_clicked()
{
    this->hide();
    add_to_category *f = new add_to_category(booklist , catlist);
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void categories::on_search_category_clicked()
{
    this->hide();
    search_category *f = new search_category(booklist , catlist );
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}
