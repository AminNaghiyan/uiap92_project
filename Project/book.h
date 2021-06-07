#ifndef BOOK_H
#define BOOK_H
#include <QString>


class book
{
public:
    QString name ;
    QString athor ;
    QString publisher ;
    QString year_of_publication;
    book();

    bool operator == (book & b){
          if(this->name==b.name && this->athor==b.athor && this->publisher==b.publisher && this->year_of_publication==b.year_of_publication)
              return true;
          else
              return false;
    }
};

#endif // BOOK_H
