#include "frutas.h"
#include "ui_frutas.h"

Frutas::Frutas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Frutas)
{
    ui->setupUi(this);
}

Frutas::~Frutas()
{
    delete ui;
}
