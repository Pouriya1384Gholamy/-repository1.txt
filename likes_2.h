#ifndef LIKES_2_H
#define LIKES_2_H

#include <QWidget>

namespace Ui {
class likes_2;
}

class likes_2 : public QWidget
{
    Q_OBJECT

public:
    explicit likes_2(QWidget *parent = nullptr);
    ~likes_2();

private:
    Ui::likes_2 *ui;
};

#endif // LIKES_2_H
