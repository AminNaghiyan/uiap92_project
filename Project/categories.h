#ifndef CATEGORIES_H
#define CATEGORIES_H

#include <QWidget>
#include<menu.h>
#include <add_to_category.h>
#include <creat_new_category.h>
#include <search_category.h>
#include <category.h>

namespace Ui {
class categories;
}

class categories : public QWidget
{
    Q_OBJECT

public:
    QList <book> booklist ;
    QList <category> catlist ;

    explicit categories ( QList <book> list , QWidget *parent = nullptr);
    explicit categories(QList <book> list , QList<category> clist , QWidget *parent = nullptr) ;
    ~categories();

private slots:
    void on_close_clicked();

    void on_back_clicked();

    void on_creat_new_category_clicked();

    void on_add_to_category_clicked();

    void on_search_category_clicked();

    void on_show_category_clicked();

private:
    Ui::categories *ui;
};

#endif // CATEGORIES_H
