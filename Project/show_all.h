#ifndef SHOW_ALL_H
#define SHOW_ALL_H

#include <QWidget>
#include <menu.h>

namespace Ui {
class show_all;
}

class show_all : public QWidget
{
    Q_OBJECT

public:
    QList <book> booklist ;
    explicit show_all(QList <book> list , QWidget *parent = nullptr);
    ~show_all();

private slots:
    void on_close_clicked();

    void on_pushButton_clicked();

private:
    Ui::show_all *ui;
};

#endif // SHOW_ALL_H
