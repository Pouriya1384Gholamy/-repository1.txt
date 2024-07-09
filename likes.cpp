#include "likes.h"
#include "ui_likes.h"
#include "complete.h"

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
Likes::Likes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Likes)
{
    ui->setupUi(this);

    ui->label->hide();
    ui->label_13->hide();
    ui->label_8->hide();
    ui->label_14->hide();
    ui->label_9->hide();
    ui->label_15->hide();
    ui->label_10->hide();
    ui->label_16->hide();
    ui->label_11->hide();
    ui->label_17->hide();
    ui->label_12->hide();
    ui->label_18->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_19->hide();
    ui->label_20->hide();


    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("e:\\daneshgah.db");
    database.open();

}

Likes::~Likes()
{
    delete ui;
}

void Likes::on_pushButton_clicked()
{
    QSqlQuery q;
    q.exec("SELECT * FROM student");
    QSqlQueryModel *m=new QSqlQueryModel;
    m->setQuery(q);
}
