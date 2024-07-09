#ifndef COMPLETE_H
#define COMPLETE_H

#include <QWidget>

namespace Ui {
class Complete;
}

class Complete : public QWidget
{
    Q_OBJECT

public:
    explicit Complete(QWidget *parent = nullptr);
    ~Complete();

private slots:
    void on_pushButton_2_clicked();

    //void on_pushButton_clicked();


    void on_comboBox_4_activated(int index);

    void on_comboBox_5_activated(int index);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_comboBox_4_activated(const QString &arg1);

private:
    Ui::Complete *ui;
};

#endif // COMPLETE_H
