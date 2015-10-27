#include "screen1.h"
#include "ui_screen1.h"

screen1::screen1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::screen1)
{
    ui->setupUi(this);

    ui->btnOFF->setStyleSheet("border: none;");
    ui->btnON->setStyleSheet("border: none;");
}

screen1::~screen1()
{
    delete ui;
}

void screen1::on_btnOFF_clicked()
{
    ui->btnON->show();
    ui->btnOFF->hide();

    ui->ledON->show();
    ui->ledOFF->hide();
}

void screen1::on_btnON_clicked()
{
    ui->btnON->hide();
    ui->btnOFF->show();

    ui->ledON->hide();
    ui->ledOFF->show();
}
