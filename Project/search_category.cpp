#include "search_category.h"
#include "ui_search_category.h"

search_category::search_category(QList <book> list , QList <category> clist , QWidget *parent) :
    QWidget(parent),
    ui(new Ui::search_category)
{
    this->booklist = list ;
    ui->setupUi(this);
    this->catlist = clist ;
}

search_category::~search_category()
{
    delete ui;
}

void search_category::on_close_clicked()
{
    this->close() ;
}

void search_category::on_reload_clicked()
{
    this->ui->category_name->clear() ;
    this->ui->textBrowser_2->clear() ;
}

void search_category::on_back_clicked()
{
    this->hide();
    categories *f = new categories( booklist , catlist );
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void search_category::on_search_clicked()
{
    this->ui->textBrowser_2->clear() ;
    bool mmd=false , mmc=false ;
    for(auto i = catlist.begin(); i!=catlist.end() ; i++){

        if(this->ui->category_name->text()==(*i).category_name ){
            mmd=true ;
            this->ui->textBrowser_2->append( "category name: " + (*i).category_name + '\n' ) ;
            this->ui->textBrowser_2->append( "*****\n" ) ;

            for(auto j=(*i).book.begin() ; j!=(*i).book.end() ; j++ ){

                mmc=true ;
                this->ui->textBrowser_2->append( "Book name: " + (*j).name + '\n' ) ;
                this->ui->textBrowser_2->append( "Athor: " + (*j).athor + '\n' ) ;
                this->ui->textBrowser_2->append( "Publisher: " + (*j).publisher + '\n' ) ;
                this->ui->textBrowser_2->append( "Year of publication: " + (*j).year_of_publication + '\n' ) ;
                this->ui->textBrowser_2->append( "_____________________________________\n" ) ;

            }
        }
    }
    if(mmd==false)
        this->ui->textBrowser_2->append( "The category was not found." ) ;

    if(mmd==true && mmc==false)
        this->ui->textBrowser_2->append( "The category is empty." ) ;
}
