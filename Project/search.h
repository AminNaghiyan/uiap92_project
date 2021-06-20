#ifndef SEARCH_H
#define SEARCH_H

#include <QWidget>
#include <menu.h>

namespace Ui {
class search;
}

class search : public QWidget
{
    Q_OBJECT

public:
    QList <book> booklist ;
    explicit search(QList <book> list , QWidget *parent = nullptr);
    ~search();

private slots:
    void on_close_clicked();

    void on_back_clicked();

    void on_pushButton_clicked();

    void on_reload_clicked();

private:
    Ui::search *ui;
};

#endif // SEARCH_H
