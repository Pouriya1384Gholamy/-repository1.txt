#ifndef PROFILE2_H
#define PROFILE2_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class profile2; }
QT_END_NAMESPACE

class profile2 : public QMainWindow
{
    Q_OBJECT

public:
    profile2(QWidget *parent = nullptr);
    ~profile2();

private slots:
    void on_pushButton_7_clicked();

private:
    Ui::profile2 *ui;
};
#endif // PROFILE2_H
