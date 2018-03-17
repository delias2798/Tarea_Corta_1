#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Productos/spaghetti.jpg");
    ui->label->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label_2->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label_3->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label_4->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label_5->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label_6->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label_7->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label_8->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label_9->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));
    ui->label_10->setPixmap(pix.scaled(100,300,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ContinueButton_clicked()
{
   hide();
   buy = new Buy(this);
   buy->show();


}
