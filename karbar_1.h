#ifndef KARBAR_1_H
#define KARBAR_1_H

#include <QWidget>

namespace Ui {
class karbar_1;
}

class karbar_1 : public QWidget
{
    Q_OBJECT

public:
    explicit karbar_1(QWidget *parent = nullptr);
    ~karbar_1();

private:
    Ui::karbar_1 *ui;
};

#endif // KARBAR_1_H
