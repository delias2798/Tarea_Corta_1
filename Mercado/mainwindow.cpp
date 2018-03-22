#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include<QStringList>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pasta(":/Productos/spaghetti.jpg");
    QPixmap fruta(":/Productos/alimentos.jpg");
    QPixmap vegetales(":/Productos/Vegetal.jpg");
    QPixmap legumbres(":/Productos/legumbres.jpeg");
    QPixmap enlatados(":/Productos/Enlatados.jpg");
    QPixmap carnes(":/Productos/carne.jpg");
    QPixmap lacteos(":/Productos/Lacteos.jpg");
    ui->labelCarnes->setPixmap(carnes.scaled(100,300,Qt::KeepAspectRatio));
    ui->labelEnlatados->setPixmap(enlatados.scaled(100,300,Qt::KeepAspectRatio));
    ui->labelFrutas->setPixmap(fruta.scaled(100,300,Qt::KeepAspectRatio));
    ui->labelLacteos->setPixmap(lacteos.scaled(100,300,Qt::KeepAspectRatio));
    ui->labelLegumbres->setPixmap(legumbres.scaled(100,300,Qt::KeepAspectRatio));
    ui->labelPastas->setPixmap(pasta.scaled(100,300,Qt::KeepAspectRatio));
    ui->labelVegetales->setPixmap(vegetales.scaled(100,300,Qt::KeepAspectRatio));
    QStringList Lacteos = QStringList()<<"leche"<<"Queso"<<"helado"<<"Yogurt"<<"Natilla"<<"Queso Crema";
    QStringList Carnes = QStringList()<<"res"<<"pollo"<<"cerdo"<<"conejo";
    QStringList Enlatados = QStringList()<<"Atun"<<"Tomates"<<"Pepinillos"<<"sardinas";
    QStringList Legumbres = QStringList()<<"Frijoles"<<"garbanzos"<<"lentejas"<<"judias";
    QStringList Frutas = QStringList()<<"fresa"<<"pera"<<"piña"<<"cereza";
    QStringList Vegetales = QStringList()<<"Brocoli"<<"Zanahoria"<<"cebolla";
    QStringList Pastas = QStringList()<<"Spaghetti"<<"farfalle"<<"caracolitos";
    QStringList L1 = QStringList();
    QStringList L2 = QStringList();


}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_ContinueButton_clicked()
{
    int i;
    i=7;
    if(ui->checkLacteos->isChecked()){
        ++i;
        if(ui->L1->isEmpty()){
            L1=Carnes;
        }
    }else{
        --i;
    }
    if(ui->checkCarnes->isChecked()){
        ++i;
    }else{
        --i;
    }
    if(ui->checkVegetales->isChecked()){
        ++i;
    }else{
        --i;
    }
    if(ui->checkFrutas->isChecked()){
        ++i;
    }else{
        --i;
    }
    if(ui->checkEnlatados->isChecked()){
        ++i;
    }else{
        --i;
    }
    if(ui->checkLegumbres->isChecked()){
        ++i;
    }else{
        --i;
    }
    if(ui->checkPastas->isChecked()){
        ++i;
    }else{
        --i;
    }
    if (i==2 || i==4){
        buy = new Buy(this);
        buy->show();
        hide();
    }else{
        QMessageBox::information(this,"Title","no");
    }
}
