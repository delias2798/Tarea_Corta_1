#include "vegetales.h"
#include "ui_vegetales.h"

Vegetales::Vegetales(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Vegetales)
{
    ui->setupUi(this);
}

Vegetales::~Vegetales()
{
    delete ui;
}
