#ifndef LEGUMBRES_H
#define LEGUMBRES_H

#include <QDialog>

namespace Ui {
class Legumbres;
}

class Legumbres : public QDialog
{
    Q_OBJECT

public:
    explicit Legumbres(QWidget *parent = 0);
    ~Legumbres();

private:
    Ui::Legumbres *ui;
};

#endif // LEGUMBRES_H
