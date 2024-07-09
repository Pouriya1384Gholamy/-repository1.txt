#include "profile2.h"
#include "ui_profile2.h"

profile2::profile2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::profile2)
{
    ui->setupUi(this);

    ui->frame_3->hide();
}

profile2::~profile2()
{
    delete ui;
}


void profile2::on_pushButton_7_clicked()
{
    ui->pushButton_7->hide();
}
