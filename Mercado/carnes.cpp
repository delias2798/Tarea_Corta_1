#include "carnes.h"
#include "ui_carnes.h"

Carnes::Carnes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Carnes)
{
    ui->setupUi(this);
}

Carnes::~Carnes()
{
    delete ui;
}
