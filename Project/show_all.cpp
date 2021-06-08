#include "show_all.h"
#include "ui_show_all.h"

show_all::show_all(QList<book> list, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::show_all)
{
    ui->setupUi(this);
    this->booklist=list ;
    QString a="____________________________";
    for (int i=0 ; i<booklist.size() ; i++){

        this->ui->textBrowser->append("Name :" + this->booklist[i].name + '\n') ;
        this->ui->textBrowser->append("Athor :" + this->booklist[i].athor + '\n') ;
        this->ui->textBrowser->append("Publisher :" + this->booklist[i].publisher + '\n') ;
        this->ui->textBrowser->append("Year of publication :" + this->booklist[i].year_of_publication + '\n') ;
        this->ui->textBrowser->append(a + '\n') ;
    }
}

show_all::~show_all()
{
    delete ui;
}

void show_all::on_close_clicked()
{
    this->close() ;
}

void show_all::on_pushButton_clicked()
{
    this->close();
    menu *f=new menu(booklist) ;
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

