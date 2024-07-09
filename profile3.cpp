#include "profile3.h"
#include "ui_profile3.h"

profile3::profile3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::profile3)
{
    ui->setupUi(this);
    ui->frame_3->hide();
}

profile3::~profile3()
{
    delete ui;
}
