#ifndef SHOW_CATEGORY_H
#define SHOW_CATEGORY_H

#include <QWidget>

namespace Ui {
class show_category;
}

class show_category : public QWidget
{
    Q_OBJECT

public:
    explicit show_category(QWidget *parent = nullptr);
    ~show_category();

private:
    Ui::show_category *ui;
};

#endif // SHOW_CATEGORY_H
