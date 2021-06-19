#ifndef CATEGORY_H
#define CATEGORY_H

#include<QString>
#include <QList>
#include <book.h>

class category
{
public:
    QString category_name ;
    QList <book> book ;
    category();
};

#endif // CATEGORY_H
