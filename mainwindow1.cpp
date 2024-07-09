#include "mainwindow1.h"
#include "ui_mainwindow1.h"
#include "my_jo.h"

MainWindow1::MainWindow1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow1)
{
    ui->setupUi(this);
}

MainWindow1::~MainWindow1()
{
    delete ui;
}


void MainWindow1::on_pushButton_3_clicked()
{
    My_Jo *b = new My_Jo();
    b->show();
}

void MainWindow1::on_pushButton_clicked()
{
    ui->frame_2->hide();
}

void MainWindow1::on_pushButton_2_clicked()
{
    ui->frame_3->hide();
}
