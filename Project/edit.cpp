#include "edit.h"
#include "ui_edit.h"

edit::edit(QList <book>list , QWidget *parent) :
    QWidget(parent),
    ui(new Ui::edit)
{
    ui->setupUi(this);
    this->booklist=list ;
}

edit::~edit()
{
    delete ui;
}

void edit::on_close_clicked()
{
    this->close() ;
}

void edit::on_pushButton_clicked()
{
    this->ui->old_name->clear();
    this->ui->new_name->clear();
    this->ui->new_athor->clear();
    this->ui->new_pub->clear();
    this->ui->new_year->clear();
    this->ui->textBrowser->clear() ;
}

void edit::on_close_2_clicked()
{
    this->close();
    menu *f=new menu(booklist) ;
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void edit::on_edit_2_clicked()
{
    bool mmd=false ;
    for(int i=0 ; i<booklist.size() ; i++ ){
        if(booklist[i].name==this->ui->old_name->text()){

            mmd=true ;

            booklist[i].name=this->ui->new_name->text() ;
            booklist[i].athor=this->ui->new_athor->text() ;
            booklist[i].publisher=this->ui->new_pub->text() ;
            booklist[i].year_of_publication=this->ui->new_year->text() ;

            break;
        }
    }
    (ctfile(booklist));

    if(mmd==true)
        this->ui->textBrowser->append("The book was edited.") ;

    else
        this->ui->textBrowser->append("The book was not found.") ;
}
