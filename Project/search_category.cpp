#include "search_category.h"
#include "ui_search_category.h"

search_category::search_category(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::search_category)
{
    ui->setupUi(this);
}

search_category::~search_category()
{
    delete ui;
}
