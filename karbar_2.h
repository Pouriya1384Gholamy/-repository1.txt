#ifndef KARBAR_2_H
#define KARBAR_2_H

#include <QWidget>

namespace Ui {
class karbar_2;
}

class karbar_2 : public QWidget
{
    Q_OBJECT

public:
    explicit karbar_2(QWidget *parent = nullptr);
    ~karbar_2();

private:
    Ui::karbar_2 *ui;
};

#endif // KARBAR_2_H
