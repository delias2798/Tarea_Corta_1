#ifndef FRUTAS_H
#define FRUTAS_H

#include <QDialog>

namespace Ui {
class Frutas;
}

class Frutas : public QDialog
{
    Q_OBJECT

public:
    explicit Frutas(QWidget *parent = 0);
    ~Frutas();

private:
    Ui::Frutas *ui;
};

#endif // FRUTAS_H
