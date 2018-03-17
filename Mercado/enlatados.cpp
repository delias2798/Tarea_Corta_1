#include "enlatados.h"
#include "ui_enlatados.h"

Enlatados::Enlatados(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Enlatados)
{
    ui->setupUi(this);
}

Enlatados::~Enlatados()
{
    delete ui;
}
