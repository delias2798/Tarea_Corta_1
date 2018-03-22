#include "campagina.h"
#include "ui_campagina.h"
#include<QPixmap>

CamPagina::CamPagina(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CamPagina)
{
    ui->setupUi(this);
    QPixmap pasta(":/Productos/spaghetti.jpg");
    QPixmap fruta(":/Productos/alimentos.jpg");
    QPixmap vegetales(":/Productos/Vegetal.jpg");
    QPixmap legumbres(":/Productos/legumbres.jpeg");
    QPixmap enlatados(":/Productos/Enlatados.jpg");
    QPixmap carnes(":/Productos/carne.jpg");
    QPixmap lacteos(":/Productos/Lacteos.jpg");
    ui->ClabelCarnes->setPixmap(carnes.scaled(100,300,Qt::KeepAspectRatio));
    ui->ClabelEnlatados->setPixmap(enlatados.scaled(100,300,Qt::KeepAspectRatio));
    ui->ClabelFrutas->setPixmap(fruta.scaled(100,300,Qt::KeepAspectRatio));
    ui->ClabelLacteos->setPixmap(lacteos.scaled(100,300,Qt::KeepAspectRatio));
    ui->ClabelLegumbres->setPixmap(legumbres.scaled(100,300,Qt::KeepAspectRatio));
    ui->ClabelPastas->setPixmap(pasta.scaled(100,300,Qt::KeepAspectRatio));
    ui->ClabelVegetales->setPixmap(vegetales.scaled(100,300,Qt::KeepAspectRatio));
}

CamPagina::~CamPagina()
{
    delete ui;
}
