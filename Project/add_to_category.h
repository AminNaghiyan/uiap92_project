#ifndef ADD_TO_CATEGORY_H
#define ADD_TO_CATEGORY_H

#include <QWidget>
#include <categories.h>
#include <category.h>

namespace Ui {
class add_to_category;
}

class add_to_category : public QWidget
{
    Q_OBJECT

public:
    QList <book> booklist ;
    QList <category> catlist;
    explicit add_to_category(QList <book> blist , QList <category> clist , QWidget *parent = nullptr);
    ~add_to_category();

private slots:
    void on_close_clicked();

    void on_reload_clicked();

    void on_back_clicked();

    void on_add_clicked();

private:
    Ui::add_to_category *ui;
};

#endif // ADD_TO_CATEGORY_H
