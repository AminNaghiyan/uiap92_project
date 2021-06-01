#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <add.h>
#include <borrow.h>
#include <categories.h>
#include <edit.h>
#include <del.h>
#include <search.h>
#include <show_all.h>

namespace Ui {
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_pushButton_clicked();

    void on_add_clicked();

    void on_delete_2_clicked();

    void on_edit_clicked();

    void on_search_clicked();

    void on_show_all_clicked();

    void on_categories_clicked();

    void on_borrow_clicked();

private:
    Ui::menu *ui;
};

#endif // MENU_H
