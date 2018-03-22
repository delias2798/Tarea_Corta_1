#ifndef CAMPAGINA_H
#define CAMPAGINA_H

#include <QDialog>

namespace Ui {
class CamPagina;
}

class CamPagina : public QDialog
{
    Q_OBJECT

public:
    explicit CamPagina(QWidget *parent = 0);
    ~CamPagina();

private:
    Ui::CamPagina *ui;

};

#endif // CAMPAGINA_H
