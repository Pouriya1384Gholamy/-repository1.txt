#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"
#include "form1.h"
#include "form2.h"
#include "form3.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    Form *h=new Form();
    h->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    Form1 *q=new Form1();
    q->show();
}

void MainWindow::on_pushButton_8_clicked()
{
    Form2 *e=new Form2();
    e->show();
}

void MainWindow::on_pushButton_11_clicked()
{
    Form3 *r=new Form3();
    r->show();
}
