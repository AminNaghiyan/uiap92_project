#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

 QList <book> book_list ;

void menu::on_pushButton_clicked()
{
    this->close() ;
}


void menu::on_add_clicked()
{
    this->hide();
    add *f=new add(book_list) ;
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void menu::on_delete_2_clicked()
{
    this->hide();
    del *f = new del ;
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void menu::on_edit_clicked()
{
    this->hide();
    edit *f=new edit ;
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void menu::on_search_clicked()
{
    this->hide();
    search *f=new search ;
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void menu::on_show_all_clicked()
{
    this->hide();
    show_all *f=new show_all ;
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void menu::on_categories_clicked()
{
    this->hide();
    categories *f=new categories ;
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void menu::on_borrow_clicked()
{
    this->hide();
    borrow *f=new borrow ;
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}
