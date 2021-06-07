#ifndef DEL_H
#define DEL_H

#include <QWidget>
#include <menu.h>

namespace Ui {
class del;
}

class del : public QWidget
{
    Q_OBJECT

public:
    QList <book> booklist ;

    del( QList<book> list , QWidget *parent = nullptr ) ;

    explicit del(QWidget *parent = nullptr);
    ~del();

private slots:
    void on_pushButton_clicked();

    void on_close_clicked();

    void on_relode_clicked();

    void on_back_clicked();

    void on_delete_2_clicked();

private:
    Ui::del *ui;
};

#endif // DEL_H
