#include "add_to_category.h"
#include "ui_add_to_category.h"

add_to_category::add_to_category(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_to_category)
{
    ui->setupUi(this);
}

add_to_category::~add_to_category()
{
    delete ui;
}
