#ifndef CATEGORIES_H
#define CATEGORIES_H

#include <QWidget>

namespace Ui {
class categories;
}

class categories : public QWidget
{
    Q_OBJECT

public:
    explicit categories(QWidget *parent = nullptr);
    ~categories();

private:
    Ui::categories *ui;
};

#endif // CATEGORIES_H
