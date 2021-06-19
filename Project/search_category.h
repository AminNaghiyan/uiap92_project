#ifndef SEARCH_CATEGORY_H
#define SEARCH_CATEGORY_H

#include <QWidget>
#include <categories.h>
#include <category.h>

namespace Ui {
class search_category;
}

class search_category : public QWidget
{
    Q_OBJECT

public:
    QList <book> booklist ;
    QList <category> catlist ;
    explicit search_category( QList <book> list , QList <category> clist , QWidget *parent = nullptr);
    ~search_category();

private slots:
    void on_close_clicked();

    void on_reload_clicked();

    void on_back_clicked();

    void on_search_clicked();

private:
    Ui::search_category *ui;
};

#endif // SEARCH_CATEGORY_H
