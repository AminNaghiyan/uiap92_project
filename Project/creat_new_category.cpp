#include "creat_new_category.h"
#include "ui_creat_new_category.h"

creat_new_category::creat_new_category(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::creat_new_category)
{
    ui->setupUi(this);
}

creat_new_category::~creat_new_category()
{
    delete ui;
}
