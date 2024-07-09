#ifndef COMPANY_JOB_H
#define COMPANY_JOB_H

#include <QWidget>

namespace Ui {
class company_job;
}

class company_job : public QWidget
{
    Q_OBJECT

public:
    explicit company_job(QWidget *parent = nullptr);
    ~company_job();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::company_job *ui;
};

#endif // COMPANY_JOB_H
