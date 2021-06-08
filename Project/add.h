#ifndef ADD_H
#define ADD_H

#include <QWidget>
#include <menu.h>

namespace Ui {
class add;
}

class add : public QWidget
{
    Q_OBJECT

public:

    QList<book> booklist;
    explicit add(QList<book> list,QWidget *parent = nullptr) ;
    explicit add(QWidget *parent = nullptr);
    ~add();

private slots:
    void on_close_clicked();

    void on_reload_clicked();

    void on_pushButton_clicked();

    void on_add_2_clicked();

private:
    Ui::add *ui;
};

#endif // ADD_H
