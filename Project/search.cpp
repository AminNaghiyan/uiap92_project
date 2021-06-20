#include "search.h"
#include "ui_search.h"

search::search(QList<book> list, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::search)
{
    this->booklist=list ;
    ui->setupUi(this);
}

search::~search()
{
    delete ui;
}

void search::on_close_clicked()
{
    this->close() ;
}

void search::on_back_clicked()
{
    this->close() ;
    this->close();
    menu *f=new menu(booklist) ;
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

void search::on_reload_clicked()
{
    this->ui->name->clear() ;
    this->ui->publisher->clear() ;
    this->ui->athor->clear() ;
    this->ui->year_of_publication->clear() ;
    this->ui->textBrowser_2->clear() ;
}
void search::on_pushButton_clicked()
{
    this->ui->textBrowser_2->clear() ;

    bool mmd=false ;

    for(auto i=booklist.begin() ; i!=booklist.end() ; i++ ){
        if( (*i).name.contains(this->ui->name->text())
                && (*i).athor.contains(this->ui->athor->text())
                && (*i).publisher.contains(this->ui->publisher->text())
                && (*i).year_of_publication.contains(this->ui->year_of_publication->text()) )
        {
            mmd=true ;

            this->ui->textBrowser_2->append( "Book name: " + (*i).name + '\n' ) ;
            this->ui->textBrowser_2->append( "Athor: " + (*i).athor + '\n' ) ;
            this->ui->textBrowser_2->append( "Publisher: " + (*i).publisher + '\n' ) ;
            this->ui->textBrowser_2->append( "Year of publication: " + (*i).year_of_publication + '\n' ) ;
            this->ui->textBrowser_2->append( "_____________________________________\n" ) ;
        }
    }
    if(mmd==false)
        this->ui->textBrowser_2->append("The book was not found.") ;
}
