#ifndef BUY_H
#define BUY_H

#include <QDialog>
#include"campagina.h"

namespace Ui {
class Buy;
}

class Buy : public QDialog
{
    Q_OBJECT

public:
    explicit Buy(QWidget *parent = 0);
    ~Buy();

private slots:
    void on_pB1_3_clicked();

    void on_pushButton_4_clicked();

    void on_pBCaPr_clicked();

private:
    Ui::Buy *ui;
    CamPagina *campagina;
};

#endif // BUY_H
