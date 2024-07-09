#ifndef PROFILE3_H
#define PROFILE3_H

#include <QWidget>

namespace Ui {
class profile3;
}

class profile3 : public QWidget
{
    Q_OBJECT

public:
    explicit profile3(QWidget *parent = nullptr);
    ~profile3();

private:
    Ui::profile3 *ui;
};

#endif // PROFILE3_H
