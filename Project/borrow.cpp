#include "borrow.h"
#include "ui_borrow.h"

borrow::borrow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::borrow)
{
    ui->setupUi(this);
}

borrow::~borrow()
{
    delete ui;
}
