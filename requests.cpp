#include "requests.h"
#include "ui_requests.h"

#include "form.h"
#include "form1.h"
#include "form2.h"
#include "form3.h"

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

requests::requests(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::requests)
{
    ui->setupUi(this);

    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("e:\\request.db");
    database.open();

}

requests::~requests()
{
    delete ui;
}

void requests::on_pushButton_2_clicked()
{
    Form *h=new Form();
    h->show();
}

void requests::on_pushButton_5_clicked()
{
    Form1 *q=new Form1();
    q->show();
}

void requests::on_pushButton_8_clicked()
{
    Form2 *e=new Form2();
    e->show();
}

void requests::on_pushButton_11_clicked()
{
    Form3 *r=new Form3();
    r->show();
}

void requests::on_pushButton_clicked()
{
    ui->frame->hide();
}

void requests::on_pushButton_4_clicked()
{
    ui->frame_2->hide();
}

void requests::on_pushButton_7_clicked()
{
    ui->frame_3->hide();
}

void requests::on_pushButton_10_clicked()
{
    ui->frame_4->hide();
}

void requests::on_pushButton_13_clicked()
{
    ui->frame->show();
    ui->frame_2->show();
    ui->frame_3->show();
    ui->frame_4->show();
}

void requests::on_pushButton_3_clicked()
{

}

void requests::on_pushButton_6_clicked()
{
    /*QSqlQuery l1;
    QString s1;
    s1=ui->lineEdit_2->text();
    l1.exec("INSERT INTO name(connect)VALUES('"+s1+"')");*/
}

void requests::on_pushButton_9_clicked()
{
    /*QSqlQuery l1;
    QString s1;
    s1=ui->lineEdit_3->text();
    l1.exec("INSERT INTO name(connect)VALUES('"+s1+"')");*/
}

void requests::on_pushButton_12_clicked()
{
    /*QSqlQuery l1;
    QString s1;
    s1=ui->lineEdit_4->text();
    l1.exec("INSERT INTO name(connect)VALUES('"+s1+"')");*/
}
