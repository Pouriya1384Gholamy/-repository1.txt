#include "complete.h"
#include "ui_complete.h"
#include "QMessageBox"

#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

Complete::Complete(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Complete)
{
    ui->setupUi(this);



        QSqlDatabase database1,bezi;
        database1=QSqlDatabase::addDatabase("QSQLITE");
        bezi=QSqlDatabase::addDatabase("QSQLITE");
        database1.setDatabaseName("e:\\daneshgah.db");
        bezi.setDatabaseName("e:\\like.db");
        database1.open();
        bezi.open();

        QSqlDatabase database2,bezi1;
        bezi1=QSqlDatabase::addDatabase("QSQLITE");
        database2=QSqlDatabase::addDatabase("QSQLITE");
        bezi1.setDatabaseName("e:\\like.db");
        database2.setDatabaseName("e:\\daneshgah.db");
        database2.open();
        bezi1.open();


            ui->comboBox->addItem("none");
            ui->comboBox->addItem("Male");
            ui->comboBox->addItem("Female");
            ui->comboBox->addItem("----");

            ui->comboBox_2->addItem("none");
            ui->comboBox_2->addItem("Student");
            ui->comboBox_2->addItem("Teacher");
            ui->comboBox_2->addItem("Athlete");
            ui->comboBox_2->addItem("Programmer");
            ui->comboBox_2->addItem("Developer");
            ui->comboBox_2->addItem("Driver");
            ui->comboBox_2->addItem("Cooker");
            ui->comboBox_2->addItem("Principal");
            ui->comboBox_2->addItem("Worker");
            ui->comboBox_2->addItem("Engineer");
            ui->comboBox_2->addItem("Nurse");
            ui->comboBox_2->addItem("Doctor");
            ui->comboBox_2->addItem("Business person");
            ui->comboBox_2->addItem("Acting");
            ui->comboBox_2->addItem("Administrator");
            ui->comboBox_2->addItem("Adviser");
            ui->comboBox_2->addItem("Agent");
            ui->comboBox_2->addItem("Realstater");
            ui->comboBox_2->addItem("Apprentice");
            ui->comboBox_2->addItem("Assistant");
            ui->comboBox_2->addItem("Boss");
            ui->comboBox_2->addItem("Clerk");
            ui->comboBox_2->addItem("Officer");
            ui->comboBox_2->addItem("Operator");
            ui->comboBox_2->addItem("Accountant");
            ui->comboBox_2->addItem("Actuary");
            ui->comboBox_2->addItem("Economist");
            ui->comboBox_2->addItem("Insurance broker");
            ui->comboBox_2->addItem("Receptionist");
            ui->comboBox_2->addItem("sales representative");
            ui->comboBox_2->addItem("Banker");
            ui->comboBox_2->addItem("Employee");
            ui->comboBox_2->addItem("Telemarketer");
            ui->comboBox_2->addItem("Database administrator");
            ui->comboBox_2->addItem("Web designer");
            ui->comboBox_2->addItem("Web developer");
            ui->comboBox_2->addItem("Computer System Analyst");
            ui->comboBox_2->addItem("Computer Network Architect");
            ui->comboBox_2->addItem("Graphic designer");
            ui->comboBox_2->addItem("Information systems security manager");
            ui->comboBox_2->addItem("dealer");
            ui->comboBox_2->addItem("Hair stylist");
            ui->comboBox_2->addItem("Cashier");
            ui->comboBox_2->addItem("Travel agent");
            ui->comboBox_2->addItem("Butcher");
            ui->comboBox_2->addItem("Dentist");
            ui->comboBox_2->addItem("Pharmacist ");
            ui->comboBox_2->addItem("Cardiologist");
            ui->comboBox_2->addItem("Computer operator");
            ui->comboBox_2->addItem("Electrician");
            ui->comboBox_2->addItem("Watchmaker");
            ui->comboBox_2->addItem("Repairman");
            ui->comboBox_2->addItem("chambermaid");
            ui->comboBox_2->addItem("Pilot");
            ui->comboBox_2->addItem("Photographe");

            ui->comboBox_3->addItem("none");
            ui->comboBox_3->addItem("Diploma");
            ui->comboBox_3->addItem("Advanced Diploma");
            ui->comboBox_3->addItem("Bachelor");
            ui->comboBox_3->addItem("Master");
            ui->comboBox_3->addItem("Doctorate");
            ui->comboBox_3->addItem("Post-Doctorate");
            ui->comboBox_3->addItem("PHD");

            ui->comboBox_4->addItem("none");
            ui->comboBox_4->addItem("English");
            ui->comboBox_4->addItem("Persian");
            ui->comboBox_4->addItem("Arabic");
            ui->comboBox_4->addItem("French");
            ui->comboBox_4->addItem("Spanish");
            ui->comboBox_4->addItem("Turkey");

            ui->comboBox_5->addItem(" ");
            ui->comboBox_5->addItem("+44");
            ui->comboBox_5->addItem("+98");
            ui->comboBox_5->addItem("+966");
            ui->comboBox_5->addItem("+33");
            ui->comboBox_5->addItem("+34");
            ui->comboBox_5->addItem("+90");
}

Complete::~Complete()
{
    delete ui;
}

void Complete::on_pushButton_2_clicked()
{

    QSqlQuery t;
    QString w1;
    w1=ui->lineEdit_6->text();
    t.exec("INSERT INTO person(name)VALUES('"+w1+"')");

    QSqlQuery q;
    QString s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
    s1=ui->lineEdit->text();
    s2=ui->lineEdit_2->text();
    s3=ui->lineEdit_3->text();
    s4=ui->lineEdit_4->text();
    s5=ui->lineEdit_5->text();
    s6=ui->comboBox->currentText();
    s7=ui->comboBox_2->currentText();
    s8=ui->comboBox_3->currentText();
    s9=ui->dateEdit->text();
    s10=ui->comboBox_4->currentText();
    q.exec("INSERT INTO student(email,password,cpassword,pnumber,uni,gender,vocation,degree,birthday,language)VALUES('"+s1+"' , '"+s2+"','"+s3+"','"+s4+"','"+s5+"','"+s6+"','"+s7+"','"+s8+"','"+s9+"','"+s10+"')");

}

void Complete::on_comboBox_4_activated(int index)
{
    switch(index)
    {
        case 1:
        QMessageBox::information(this,"English","Welcome","Ok");
        break;
        case 2:
        QMessageBox::information(this,"فارسی","خوش آمدید","باشه");
        break;
        case 3:
        QMessageBox::information(this,"عربی","مرحباً","نعم");
        break;
        case 4:
        QMessageBox::information(this,"Français","accueillir","d'accord");
        break;
        case 5:
        QMessageBox::information(this,"Español","bienvenido","OK");
        break;
        case 6:
        QMessageBox::information(this,"Türkçe","Hoş geldin","Tamam");
        break;
    }
}

void Complete::on_comboBox_5_activated(int index)
{
    switch(index)
        {
            case 1:
            ui->lineEdit_4->setPlaceholderText("England");

            break;
            case 2:
            ui->lineEdit_4->setPlaceholderText("Iran");

            break;
            case 3:
            ui->lineEdit_4->setPlaceholderText("Arabia");

            break;
            case 4:
            ui->lineEdit_4->setPlaceholderText("France");

            break;
            case 5:
            ui->lineEdit_4->setPlaceholderText("Spain");
            break;
            case 6:
            ui->lineEdit_4->setPlaceholderText("Turkey");
            break;
        }
}

void Complete::on_pushButton_3_clicked()
{
    if(ui->lineEdit_2->echoMode()==QLineEdit::Password)
        {
            ui->lineEdit_2->setEchoMode((QLineEdit::Normal));
        }
        else
        {
            ui->lineEdit_2->setEchoMode(QLineEdit::Password);
        }
}
