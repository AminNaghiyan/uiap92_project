#ifndef EDIT_H
#define EDIT_H

#include <QWidget>
#include <menu.h>
#include <QList>

namespace Ui {
class edit;
}

class edit : public QWidget
{
    Q_OBJECT

public:
    QList <book> booklist ;
    explicit edit(QList <book> list , QWidget *parent = nullptr);
    ~edit();

private slots:
    void on_close_clicked();

    void on_pushButton_clicked();

    void on_close_2_clicked();

    void on_edit_2_clicked();

private:
    Ui::edit *ui;
};

#endif // EDIT_H
