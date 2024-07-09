#include "my_jo.h"
#include "ui_my_jo.h"

My_Jo::My_Jo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::My_Jo)
{
    ui->setupUi(this);
}

My_Jo::~My_Jo()
{
    delete ui;
}

void My_Jo::on_pushButton_clicked()
{
    ui->frame_2->hide();
}

void My_Jo::on_pushButton_7_clicked()
{
    ui->frame_3->hide();
}

void My_Jo::on_pushButton_8_clicked()
{
    ui->frame_4->hide();
}

void My_Jo::on_pushButton_9_clicked()
{
    ui->frame_5->hide();
}
