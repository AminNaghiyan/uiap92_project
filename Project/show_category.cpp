#include "show_category.h"
#include "ui_show_category.h"

show_category::show_category(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::show_category)
{
    ui->setupUi(this);
}

show_category::~show_category()
{
    delete ui;
}
