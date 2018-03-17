#include "buy.h"
#include "ui_buy.h"

Buy::Buy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Buy)
{
    ui->setupUi(this);
    QPixmap pix(":/Productos/spaghetti.jpg");
    ui->label1->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label2->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label3->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label4->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label5->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label6->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label7->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label8->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label9->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label10->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
}

Buy::~Buy()
{
    delete ui;
}

void Buy::on_pB1_3_clicked()
{

}
