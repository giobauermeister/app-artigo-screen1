#ifndef SCREEN1_H
#define SCREEN1_H

#include <QMainWindow>

namespace Ui {
class screen1;
}

class screen1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit screen1(QWidget *parent = 0);
    ~screen1();

private slots:
    void on_btnOFF_clicked();

    void on_btnON_clicked();

private:
    Ui::screen1 *ui;
};

#endif // SCREEN1_H
