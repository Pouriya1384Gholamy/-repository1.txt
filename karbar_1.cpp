#include "karbar_1.h"
#include "ui_karbar_1.h"

karbar_1::karbar_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::karbar_1)
{
    ui->setupUi(this);
}

karbar_1::~karbar_1()
{
    delete ui;
}
