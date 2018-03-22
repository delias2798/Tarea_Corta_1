#ifndef CONFIRMAR_H
#define CONFIRMAR_H

#include <QDialog>

namespace Ui {
class Confirmar;
}

class Confirmar : public QDialog
{
    Q_OBJECT

public:
    explicit Confirmar(QWidget *parent = 0);
    ~Confirmar();

private:
    Ui::Confirmar *ui;
};

#endif // CONFIRMAR_H
