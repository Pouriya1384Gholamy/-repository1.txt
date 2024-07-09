#include "message.h"
#include "ui_message.h"

message::message(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::message)
{
    ui->setupUi(this);
    ui->label_2->hide();
    ui->pushButton_2->hide();
    ui->label_4->hide();
}

message::~message()
{
    delete ui;
}

void message::on_pushButton_clicked()
{
    QString s1 ;
    s1=ui->lineEdit->text();
    ui->label->setText(s1);
    ui->lineEdit->clear();
    ui->label_2->show();
    ui->pushButton->hide();
    ui->pushButton_2->show();
}

void message::on_pushButton_2_clicked()
{
    QString s2 ;
    s2=ui->lineEdit->text();
    ui->label_3->setText(s2);
    ui->lineEdit->clear();
    ui->label_4->show();
}
