#ifndef LOREM_H
#define LOREM_H

#include <QWidget>

namespace Ui {
class lorem;
}

class lorem : public QWidget
{
    Q_OBJECT

public:
    explicit lorem(QWidget *parent = nullptr);
    ~lorem();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::lorem *ui;
};

#endif // LOREM_H
