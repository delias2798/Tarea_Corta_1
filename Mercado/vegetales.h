#ifndef VEGETALES_H
#define VEGETALES_H

#include <QDialog>

namespace Ui {
class Vegetales;
}

class Vegetales : public QDialog
{
    Q_OBJECT

public:
    explicit Vegetales(QWidget *parent = 0);
    ~Vegetales();

private:
    Ui::Vegetales *ui;
};

#endif // VEGETALES_H
