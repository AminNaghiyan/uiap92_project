#ifndef ADD_TO_CATEGORY_H
#define ADD_TO_CATEGORY_H

#include <QWidget>

namespace Ui {
class add_to_category;
}

class add_to_category : public QWidget
{
    Q_OBJECT

public:
    explicit add_to_category(QWidget *parent = nullptr);
    ~add_to_category();

private:
    Ui::add_to_category *ui;
};

#endif // ADD_TO_CATEGORY_H
