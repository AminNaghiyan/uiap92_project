#ifndef SEARCH_CATEGORY_H
#define SEARCH_CATEGORY_H

#include <QWidget>

namespace Ui {
class search_category;
}

class search_category : public QWidget
{
    Q_OBJECT

public:
    explicit search_category(QWidget *parent = nullptr);
    ~search_category();

private:
    Ui::search_category *ui;
};

#endif // SEARCH_CATEGORY_H
