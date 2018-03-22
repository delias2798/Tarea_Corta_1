/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelLacteos;
    QCheckBox *checkLacteos;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *labelPastas;
    QCheckBox *checkPastas;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelVegetales;
    QCheckBox *checkVegetales;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelCarnes;
    QCheckBox *checkCarnes;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelFrutas;
    QCheckBox *checkFrutas;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelEnlatados;
    QCheckBox *checkEnlatados;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelLegumbres;
    QCheckBox *checkLegumbres;
    QPushButton *ContinueButton;
    QMenuBar *menuBar;
    QMenu *menuPagina_de_Inicio;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(605, 478);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 87, 181));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelLacteos = new QLabel(layoutWidget);
        labelLacteos->setObjectName(QStringLiteral("labelLacteos"));

        verticalLayout_5->addWidget(labelLacteos);

        checkLacteos = new QCheckBox(layoutWidget);
        checkLacteos->setObjectName(QStringLiteral("checkLacteos"));

        verticalLayout_5->addWidget(checkLacteos);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(120, 21, 87, 181));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelPastas = new QLabel(layoutWidget1);
        labelPastas->setObjectName(QStringLiteral("labelPastas"));

        verticalLayout->addWidget(labelPastas);

        checkPastas = new QCheckBox(layoutWidget1);
        checkPastas->setObjectName(QStringLiteral("checkPastas"));

        verticalLayout->addWidget(checkPastas);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(449, 21, 87, 181));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelVegetales = new QLabel(layoutWidget2);
        labelVegetales->setObjectName(QStringLiteral("labelVegetales"));

        verticalLayout_4->addWidget(labelVegetales);

        checkVegetales = new QCheckBox(layoutWidget2);
        checkVegetales->setObjectName(QStringLiteral("checkVegetales"));

        verticalLayout_4->addWidget(checkVegetales);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(220, 20, 87, 181));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelCarnes = new QLabel(layoutWidget3);
        labelCarnes->setObjectName(QStringLiteral("labelCarnes"));

        verticalLayout_2->addWidget(labelCarnes);

        checkCarnes = new QCheckBox(layoutWidget3);
        checkCarnes->setObjectName(QStringLiteral("checkCarnes"));

        verticalLayout_2->addWidget(checkCarnes);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(330, 20, 87, 181));
        verticalLayout_3 = new QVBoxLayout(layoutWidget4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelFrutas = new QLabel(layoutWidget4);
        labelFrutas->setObjectName(QStringLiteral("labelFrutas"));

        verticalLayout_3->addWidget(labelFrutas);

        checkFrutas = new QCheckBox(layoutWidget4);
        checkFrutas->setObjectName(QStringLiteral("checkFrutas"));

        verticalLayout_3->addWidget(checkFrutas);

        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(340, 210, 87, 151));
        verticalLayout_7 = new QVBoxLayout(layoutWidget5);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelEnlatados = new QLabel(layoutWidget5);
        labelEnlatados->setObjectName(QStringLiteral("labelEnlatados"));

        verticalLayout_7->addWidget(labelEnlatados);

        checkEnlatados = new QCheckBox(layoutWidget5);
        checkEnlatados->setObjectName(QStringLiteral("checkEnlatados"));

        verticalLayout_7->addWidget(checkEnlatados);

        layoutWidget6 = new QWidget(centralWidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(110, 210, 95, 151));
        verticalLayout_6 = new QVBoxLayout(layoutWidget6);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        labelLegumbres = new QLabel(layoutWidget6);
        labelLegumbres->setObjectName(QStringLiteral("labelLegumbres"));

        verticalLayout_6->addWidget(labelLegumbres);

        checkLegumbres = new QCheckBox(layoutWidget6);
        checkLegumbres->setObjectName(QStringLiteral("checkLegumbres"));

        verticalLayout_6->addWidget(checkLegumbres);

        ContinueButton = new QPushButton(centralWidget);
        ContinueButton->setObjectName(QStringLiteral("ContinueButton"));
        ContinueButton->setGeometry(QRect(260, 390, 80, 22));
        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        ContinueButton->raise();
        labelFrutas->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 605, 19));
        menuPagina_de_Inicio = new QMenu(menuBar);
        menuPagina_de_Inicio->setObjectName(QStringLiteral("menuPagina_de_Inicio"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuPagina_de_Inicio->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        labelLacteos->setText(QString());
        checkLacteos->setText(QApplication::translate("MainWindow", "Lacteos", 0));
        labelPastas->setText(QString());
        checkPastas->setText(QApplication::translate("MainWindow", "Pastas", 0));
        labelVegetales->setText(QString());
        checkVegetales->setText(QApplication::translate("MainWindow", "Vegetales", 0));
        labelCarnes->setText(QString());
        checkCarnes->setText(QApplication::translate("MainWindow", "Carnes", 0));
        labelFrutas->setText(QString());
        checkFrutas->setText(QApplication::translate("MainWindow", "Frutas", 0));
        labelEnlatados->setText(QString());
        checkEnlatados->setText(QApplication::translate("MainWindow", "Enlatados", 0));
        labelLegumbres->setText(QString());
        checkLegumbres->setText(QApplication::translate("MainWindow", "Legumbres", 0));
        ContinueButton->setText(QApplication::translate("MainWindow", "Continue", 0));
        menuPagina_de_Inicio->setTitle(QApplication::translate("MainWindow", "Pagina de Inicio", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
