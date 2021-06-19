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
    this->hide();
    categories *f = new categories( booklist , catlist );
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void add_to_category::on_add_clicked()
{
    this->ui->textBrowser_3->clear() ;

    bool mmd=false , mmc=false ;

    for(int i=0 ; i<catlist.size() ; i++ ){
        if(this->ui->category_name->text() == catlist[i].category_name){

            mmd=true ;

            for(int j=0 ; j<booklist.size() ; j++ ){

                if(booklist[j].name == this->ui->book_name->text()){

                    mmc=true ;

                    book w;
                    w.name=booklist[j].name;
                    w.athor=booklist[j].athor;
                    w.publisher=booklist[j].publisher;
                    w.year_of_publication=booklist[j].year_of_publication;

                    catlist[i].book.append(w) ; ;
                }
            }
        }
    }

    if(mmd==false)
        this->ui->textBrowser_3->append("The category was not found.") ;

    if(mmd==true && mmc==false)
        this->ui->textBrowser_3->append("The book was not found.") ;

    if(mmd==true && mmc==true)
        this->ui->textBrowser_3->append("The book was added to category.") ;
}
