#ifndef BORROW_H
#define BORROW_H

#include <QWidget>
#include <menu.h>
#include <borrow_class.h>

namespace Ui {
class borrow;
}

class borrow : public QWidget
{
    Q_OBJECT

public:
    QList<book> booklist ;
    QList <borrow_class> borrowlist ;
    explicit borrow( QList<book> list , QList <borrow_class> blist , QWidget *parent = nullptr);
    ~borrow();

private slots:

    void write( QList<borrow_class> borrowlist);

    void on_close_clicked();

    void on_reload_clicked();

    void on_back_clicked();

    void on_borrow_2_clicked();

private:
    Ui::borrow *ui;
};

#endif // BORROW_H
