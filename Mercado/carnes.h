#ifndef CARNES_H
#define CARNES_H

#include <QDialog>

namespace Ui {
class Carnes;
}

class Carnes : public QDialog
{
    Q_OBJECT

public:
    explicit Carnes(QWidget *parent = 0);
    ~Carnes();

private:
    Ui::Carnes *ui;
};

#endif // CARNES_H
