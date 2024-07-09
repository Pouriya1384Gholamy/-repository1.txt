#include "karbar_2.h"
#include "ui_karbar_2.h"

karbar_2::karbar_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::karbar_2)
{
    ui->setupUi(this);
}

karbar_2::~karbar_2()
{
    delete ui;
}
