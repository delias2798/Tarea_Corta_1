#include "legumbres.h"
#include "ui_legumbres.h"

Legumbres::Legumbres(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Legumbres)
{
    ui->setupUi(this);
}

Legumbres::~Legumbres()
{
    delete ui;
}
