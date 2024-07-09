#include "company_job.h"
#include "ui_company_job.h"

company_job::company_job(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::company_job)
{
    ui->setupUi(this);
    ui->pushButton_6->hide();
    ui->pushButton_7->hide();
}

company_job::~company_job()
{
    delete ui;
}

void company_job::on_pushButton_4_clicked()
{
    ui->pushButton_4->hide();
}

void company_job::on_pushButton_5_clicked()
{
    ui->pushButton_5->hide();
}
