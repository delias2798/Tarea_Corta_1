#include "confirmar.h"
#include "ui_confirmar.h"

Confirmar::Confirmar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Confirmar)
{
    ui->setupUi(this);
}

Confirmar::~Confirmar()
{
    delete ui;
}
