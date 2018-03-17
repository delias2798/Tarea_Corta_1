#ifndef BUY_H
#define BUY_H

#include <QDialog>

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

private:
    Ui::Buy *ui;
};

#endif // BUY_H
