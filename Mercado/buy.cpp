#include "buy.h"
#include "ui_buy.h"
#include<QStringList>

Buy::Buy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Buy)
{
    QStringList testlist = QStringList()<<"foo"<<"bar"<<"lol";
    ui->setupUi(this);
    ui->list1->addItems(testlist);
}

Buy::~Buy()
{
    delete ui;
}




void Buy::on_pBCaPr_clicked()
{
    campagina = new CamPagina(this);
    campagina->show();
    hide();
}
