#ifndef ENLATADOS_H
#define ENLATADOS_H

#include <QDialog>

namespace Ui {
class Enlatados;
}

class Enlatados : public QDialog
{
    Q_OBJECT

public:
    explicit Enlatados(QWidget *parent = 0);
    ~Enlatados();

private:
    Ui::Enlatados *ui;
};

#endif // ENLATADOS_H
