#ifndef CREAT_NEW_CATEGORY_H
#define CREAT_NEW_CATEGORY_H

#include <QWidget>

namespace Ui {
class creat_new_category;
}

class creat_new_category : public QWidget
{
    Q_OBJECT

public:
    explicit creat_new_category(QWidget *parent = nullptr);
    ~creat_new_category();

private:
    Ui::creat_new_category *ui;
};

#endif // CREAT_NEW_CATEGORY_H
