/********************************************************************************
** Form generated from reading UI file 'campagina.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMPAGINA_H
#define UI_CAMPAGINA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CamPagina
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *ClabelVegetales;
    QCheckBox *checkVegetales;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *ClabelCarnes;
    QCheckBox *checkCarnes;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *ClabelEnlatados;
    QCheckBox *checkEnlatados;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout;
    QLabel *ClabelPastas;
    QCheckBox *checkPastas;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *ClabelFrutas;
    QCheckBox *checkFrutas;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *ClabelLegumbres;
    QCheckBox *checkLegumbres;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *ClabelLacteos;
    QCheckBox *checkLacteos;
    QPushButton *pushButton;

    void setupUi(QDialog *CamPagina)
    {
        if (CamPagina->objectName().isEmpty())
            CamPagina->setObjectName(QStringLiteral("CamPagina"));
        CamPagina->resize(646, 482);
        layoutWidget = new QWidget(CamPagina);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(469, 41, 87, 181));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        ClabelVegetales = new QLabel(layoutWidget);
        ClabelVegetales->setObjectName(QStringLiteral("ClabelVegetales"));

        verticalLayout_4->addWidget(ClabelVegetales);

        checkVegetales = new QCheckBox(layoutWidget);
        checkVegetales->setObjectName(QStringLiteral("checkVegetales"));

        verticalLayout_4->addWidget(checkVegetales);

        layoutWidget_2 = new QWidget(CamPagina);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(240, 40, 87, 181));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ClabelCarnes = new QLabel(layoutWidget_2);
        ClabelCarnes->setObjectName(QStringLiteral("ClabelCarnes"));

        verticalLayout_2->addWidget(ClabelCarnes);

        checkCarnes = new QCheckBox(layoutWidget_2);
        checkCarnes->setObjectName(QStringLiteral("checkCarnes"));

        verticalLayout_2->addWidget(checkCarnes);

        layoutWidget_3 = new QWidget(CamPagina);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(360, 230, 87, 151));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        ClabelEnlatados = new QLabel(layoutWidget_3);
        ClabelEnlatados->setObjectName(QStringLiteral("ClabelEnlatados"));

        verticalLayout_7->addWidget(ClabelEnlatados);

        checkEnlatados = new QCheckBox(layoutWidget_3);
        checkEnlatados->setObjectName(QStringLiteral("checkEnlatados"));

        verticalLayout_7->addWidget(checkEnlatados);

        layoutWidget_4 = new QWidget(CamPagina);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(140, 41, 87, 181));
        verticalLayout = new QVBoxLayout(layoutWidget_4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ClabelPastas = new QLabel(layoutWidget_4);
        ClabelPastas->setObjectName(QStringLiteral("ClabelPastas"));

        verticalLayout->addWidget(ClabelPastas);

        checkPastas = new QCheckBox(layoutWidget_4);
        checkPastas->setObjectName(QStringLiteral("checkPastas"));

        verticalLayout->addWidget(checkPastas);

        layoutWidget_5 = new QWidget(CamPagina);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(350, 40, 87, 181));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        ClabelFrutas = new QLabel(layoutWidget_5);
        ClabelFrutas->setObjectName(QStringLiteral("ClabelFrutas"));

        verticalLayout_3->addWidget(ClabelFrutas);

        checkFrutas = new QCheckBox(layoutWidget_5);
        checkFrutas->setObjectName(QStringLiteral("checkFrutas"));

        verticalLayout_3->addWidget(checkFrutas);

        layoutWidget_6 = new QWidget(CamPagina);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(130, 230, 95, 151));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        ClabelLegumbres = new QLabel(layoutWidget_6);
        ClabelLegumbres->setObjectName(QStringLiteral("ClabelLegumbres"));

        verticalLayout_6->addWidget(ClabelLegumbres);

        checkLegumbres = new QCheckBox(layoutWidget_6);
        checkLegumbres->setObjectName(QStringLiteral("checkLegumbres"));

        verticalLayout_6->addWidget(checkLegumbres);

        layoutWidget_7 = new QWidget(CamPagina);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(40, 40, 87, 181));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        ClabelLacteos = new QLabel(layoutWidget_7);
        ClabelLacteos->setObjectName(QStringLiteral("ClabelLacteos"));

        verticalLayout_5->addWidget(ClabelLacteos);

        checkLacteos = new QCheckBox(layoutWidget_7);
        checkLacteos->setObjectName(QStringLiteral("checkLacteos"));

        verticalLayout_5->addWidget(checkLacteos);

        pushButton = new QPushButton(CamPagina);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 440, 80, 22));
        pushButton->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        layoutWidget_3->raise();
        layoutWidget_4->raise();
        layoutWidget_5->raise();
        layoutWidget_6->raise();
        layoutWidget_7->raise();
        pushButton->raise();

        retranslateUi(CamPagina);

        QMetaObject::connectSlotsByName(CamPagina);
    } // setupUi

    void retranslateUi(QDialog *CamPagina)
    {
        CamPagina->setWindowTitle(QApplication::translate("CamPagina", "Dialog", 0));
        ClabelVegetales->setText(QString());
        checkVegetales->setText(QApplication::translate("CamPagina", "Vegetales", 0));
        ClabelCarnes->setText(QString());
        checkCarnes->setText(QApplication::translate("CamPagina", "Carnes", 0));
        ClabelEnlatados->setText(QString());
        checkEnlatados->setText(QApplication::translate("CamPagina", "Enlatados", 0));
        ClabelPastas->setText(QString());
        checkPastas->setText(QApplication::translate("CamPagina", "Pastas", 0));
        ClabelFrutas->setText(QString());
        checkFrutas->setText(QApplication::translate("CamPagina", "Frutas", 0));
        ClabelLegumbres->setText(QString());
        checkLegumbres->setText(QApplication::translate("CamPagina", "Legumbres", 0));
        ClabelLacteos->setText(QString());
        checkLacteos->setText(QApplication::translate("CamPagina", "Lacteos", 0));
        pushButton->setText(QApplication::translate("CamPagina", "Continue", 0));
    } // retranslateUi

};

namespace Ui {
    class CamPagina: public Ui_CamPagina {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMPAGINA_H
