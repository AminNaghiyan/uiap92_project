#ifndef CREAT_NEW_CATEGORY_H
#define CREAT_NEW_CATEGORY_H

#include <QWidget>
#include <categories.h>
#include <category.h>

namespace Ui {
class creat_new_category;
}

class creat_new_category : public QWidget
{
    Q_OBJECT

public:
    QList <book> booklist ;
    QList <category> catlist ;
    explicit creat_new_category( QList <book> list , QList <category> clist, QWidget *parent = nullptr);
    ~creat_new_category();

private slots:
    void on_close_clicked();

    void on_reload_clicked();

    void on_back_clicked();

    void on_add_category_clicked();

private:
    Ui::creat_new_category *ui;
};

#endif // CREAT_NEW_CATEGORY_H
