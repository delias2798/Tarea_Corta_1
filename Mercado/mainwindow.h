#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "buy.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ContinueButton_clicked();

    void on_checkPastas_clicked();

    void on_ContinueButton_pressed();

private:
    Ui::MainWindow *ui;
    Buy *buy;
};

#endif // MAINWINDOW_H
