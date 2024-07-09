#include "welcome.h"
#include "home.h"
#include "requests.h"
#include "ui_welcome.h"
#include "mainwindow1.h"
#include "lorem.h"
#include "message.h"

#include "complete.h"
Welcome::Welcome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Me");
    ui->comboBox->addItem("Company");


}

Welcome::~Welcome()
{
    delete ui;
}
void Welcome::on_pushButton_clicked()
{   
        Home *f=new Home;
        f->show();
}

void Welcome::on_pushButton_6_clicked()
{
   Complete *p = new Complete();
   p->show();
}

void Welcome::on_pushButton_4_clicked()
{
    QString e="Me";
    QString z=ui->comboBox->currentText();
    if(e==z)
    {
        requests *h=new requests();
        h->show();
    }
}
void Welcome::on_pushButton_3_clicked()
{
    QString e="Me";
    QString z=ui->comboBox->currentText();
    if(e==z)
    {
        MainWindow1 *z=new MainWindow1();
        z->show();
    }
    else{
        lorem *fk = new lorem();
        fk->show();
    }
}



void Welcome::on_pushButton_5_clicked()
{
    QString s="Me";
    QString u=ui->comboBox->currentText();
    if(s==u)
    {
        message *io = new message();
        io->show();
    }
}
