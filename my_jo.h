#ifndef MY_JO_H
#define MY_JO_H

#include <QWidget>

namespace Ui {
class My_Jo;
}

class My_Jo : public QWidget
{
    Q_OBJECT

public:
    explicit My_Jo(QWidget *parent = nullptr);
    ~My_Jo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::My_Jo *ui;
};

#endif // MY_JO_H
