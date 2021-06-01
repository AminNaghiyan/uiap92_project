#ifndef SHOW_ALL_H
#define SHOW_ALL_H

#include <QWidget>

namespace Ui {
class show_all;
}

class show_all : public QWidget
{
    Q_OBJECT

public:
    explicit show_all(QWidget *parent = nullptr);
    ~show_all();

private:
    Ui::show_all *ui;
};

#endif // SHOW_ALL_H
