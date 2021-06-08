#include "ctfile.h"
#define books "books.txt"

ctfile::ctfile(QList <book> list)
{
    QFile file(books) ;
    file.open(QFile :: Text | QFile :: WriteOnly);
    QTextStream qts(&file) ;
    for(int i=0 ; i<list.size() ; i++){
        qts << list[i].name + '\n' ;
        qts << list[i].athor + '\n' ;
        qts << list[i].publisher + '\n' ;
        qts << list[i].year_of_publication + '\n' ;
    }
    file.close() ;
}
