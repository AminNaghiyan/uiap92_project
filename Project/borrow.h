#ifndef BORROW_H
#define BORROW_H

#include <QWidget>

namespace Ui {
class borrow;
}

class borrow : public QWidget
{
    Q_OBJECT

public:
    explicit borrow(QWidget *parent = nullptr);
    ~borrow();

private:
    Ui::borrow *ui;
};

#endif // BORROW_H
