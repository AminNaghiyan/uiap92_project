#ifndef BORROW_H
#define BORROW_H

#include <QWidget>
#include <add.h>

namespace Ui {
class borrow;
}

class borrow : public QWidget
{
    Q_OBJECT

public:
    explicit borrow(QWidget *parent = nullptr);
    ~borrow();

private slots:
    void on_borrow_2_clicked();

private:
    Ui::borrow *ui;
};

#endif // BORROW_H
