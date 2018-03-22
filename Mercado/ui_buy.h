/********************************************************************************
** Form generated from reading UI file 'buy.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUY_H
#define UI_BUY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Buy
{
public:
    QPushButton *pushButton_3;
    QPushButton *pBCaPr;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListWidget *list1;
    QPushButton *pBAd;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QListWidget *list2;
    QPushButton *pBAd2;

    void setupUi(QDialog *Buy)
    {
        if (Buy->objectName().isEmpty())
            Buy->setObjectName(QStringLiteral("Buy"));
        Buy->resize(646, 494);
        pushButton_3 = new QPushButton(Buy);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(99, 370, 121, 22));
        pBCaPr = new QPushButton(Buy);
        pBCaPr->setObjectName(QStringLiteral("pBCaPr"));
        pBCaPr->setGeometry(QRect(410, 370, 131, 22));
        widget = new QWidget(Buy);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 258, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        list1 = new QListWidget(widget);
        list1->setObjectName(QStringLiteral("list1"));

        verticalLayout->addWidget(list1);

        pBAd = new QPushButton(widget);
        pBAd->setObjectName(QStringLiteral("pBAd"));

        verticalLayout->addWidget(pBAd);

        widget1 = new QWidget(Buy);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(350, 30, 258, 261));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        list2 = new QListWidget(widget1);
        list2->setObjectName(QStringLiteral("list2"));

        verticalLayout_2->addWidget(list2);

        pBAd2 = new QPushButton(widget1);
        pBAd2->setObjectName(QStringLiteral("pBAd2"));

        verticalLayout_2->addWidget(pBAd2);


        retranslateUi(Buy);

        QMetaObject::connectSlotsByName(Buy);
    } // setupUi

    void retranslateUi(QDialog *Buy)
    {
        Buy->setWindowTitle(QApplication::translate("Buy", "Dialog", 0));
        pushButton_3->setText(QApplication::translate("Buy", "Terminar Compra", 0));
        pBCaPr->setText(QApplication::translate("Buy", "Cambiar Productos", 0));
        pBAd->setText(QApplication::translate("Buy", "Agregar", 0));
        pBAd2->setText(QApplication::translate("Buy", "Agregar", 0));
    } // retranslateUi

};

namespace Ui {
    class Buy: public Ui_Buy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUY_H
