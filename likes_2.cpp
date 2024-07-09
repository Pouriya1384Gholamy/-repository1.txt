#include "likes_2.h"
#include "ui_likes_2.h"

likes_2::likes_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::likes_2)
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
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_21->hide();
    ui->label_22->hide();
}

likes_2::~likes_2()
{
    delete ui;
}
