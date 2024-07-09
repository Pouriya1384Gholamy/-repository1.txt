#ifndef REQUESTS_H
#define REQUESTS_H

#include <QWidget>

namespace Ui {
class requests;
}

class requests : public QWidget
{
    Q_OBJECT

public:
    explicit requests(QWidget *parent = nullptr);
    ~requests();

private:
    Ui::requests *ui;
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_11_clicked();
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_12_clicked();
};

#endif // REQUESTS_H
