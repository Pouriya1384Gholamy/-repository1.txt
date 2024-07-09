#include "lorem.h"
#include "ui_lorem.h"

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

lorem::lorem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lorem)
{
    ui->setupUi(this);

    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("e:\\lorem.db");
    database.open();


    ui->comboBox_3->addItem(" ");
    ui->comboBox_3->addItem("On site");
    ui->comboBox_3->addItem("Remote");
    ui->comboBox_3->addItem("Hybrid");

    ui->comboBox_4->addItem(" ");
    ui->comboBox_4->addItem("Full-type");
    ui->comboBox_4->addItem("Part-time");
    ui->comboBox_4->addItem("Contract");
    ui->comboBox_4->addItem("Temporary");
    ui->comboBox_4->addItem("Other");
    ui->comboBox_4->addItem("Volunteer");
    ui->comboBox_4->addItem("Internship");

}

lorem::~lorem()
{
    delete ui;
}

void lorem::on_pushButton_clicked()
{

}

void lorem::on_pushButton_2_clicked()
{
    QSqlQuery z;
    QString s2,s4,s5,s6,s7;
    s2=ui->lineEdit_10->text();
    s4=ui->lineEdit_12->text();
    s5=ui->lineEdit_15->text();
    s6=ui->comboBox_3->currentText();
    s7=ui->comboBox_4->currentText();
    z.exec("INSERT INTO ipsum(jobtitle,company,workplace,location,jobtype)VALUES('"+s2+"','"+s4+"','"+s5+"','"+s6+"','"+s7+"')");
}
