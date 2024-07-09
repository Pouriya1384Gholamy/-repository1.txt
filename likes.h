#ifndef LIKES_H
#define LIKES_H

#include <QWidget>

namespace Ui {
class Likes;
}

class Likes : public QWidget
{
    Q_OBJECT

public:
    explicit Likes(QWidget *parent = nullptr);
    ~Likes();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Likes *ui;
};

#endif // LIKES_H
