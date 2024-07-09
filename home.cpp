#include "home.h"
#include "ui_home.h"

#include "likes.h"
#include "likes_2.h"
#include "requests.h"
#include "karbar_1.h"
#include "karbar_2.h"
#include "mainwindow1.h"
#include "complete.h"
#include "profile2.h"
#include "profile3.h"

#include "QMessageBox"

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    ui->pushButton_18->hide();
    ui->pushButton_19->hide();

    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("e:\\like.db");
    database.open();

    QSqlDatabase database1;
    database1=QSqlDatabase::addDatabase("QSQLITE");
    database1.setDatabaseName("e:\\daneshgah.db");
    database1.open();

}

Home::~Home()
{
    delete ui;
}

void Home::on_pushButton_6_clicked()
{
    ui->frame_7->hide();
}

void Home::on_pushButton_7_clicked()
{
    ui->frame_8->hide();
}

void Home::on_pushButton_10_clicked()
{
    int t=7;
    t+=1;
    ui->label_15->setText(QString::number(t));
}


void Home::on_pushButton_12_clicked()
{
    Likes *p = new Likes();
    p->show();
}

void Home::on_pushButton_8_clicked()
{
    int r=9;
    r+=1;
    ui->label_16->setText(QString::number(r));
}

void Home::on_pushButton_4_clicked()
{
    requests *h=new requests();
    h->show();
}

void Home::on_pushButton_3_clicked()
{
    MainWindow1 *v = new MainWindow1();
    v->show();
}

void Home::on_pushButton_16_clicked()
{

}

void Home::on_pushButton_18_clicked()
{

}

void Home::on_pushButton_15_clicked()
{
    ui->pushButton_15->hide();
}

void Home::on_pushButton_20_clicked()
{
    ui->pushButton_20->hide();
}


void Home::on_pushButton_9_clicked()
{
    karbar_1 *pish=new karbar_1();
    pish->show();
}

void Home::on_pushButton_11_clicked()
{
    karbar_2 *pas=new karbar_2();
    pas->show();
}

void Home::on_pushButton_13_clicked()
{
    int t=21;
    t = t + 1;
    ui->label_18->setText(QString::number(t));
}

void Home::on_pushButton_14_clicked()
{
    int y = 65;
    y = y + 1;
    ui->label_19->setText(QString::number(y));
}

void Home::on_pushButton_21_clicked()
{
    likes_2 *zx = new likes_2();
    zx->show();
}

void Home::on_pushButton_22_clicked()
{
    profile2 *jkl=new profile2();
    jkl->show();
}

void Home::on_pushButton_23_clicked()
{
    profile2 *jkl=new profile2();
    jkl->show();
}

void Home::on_pushButton_24_clicked()
{
    profile3 *jk=new profile3();
    jk->show();
}

void Home::on_pushButton_25_clicked()
{
    profile3 *jk=new profile3();
    jk->show();
}
