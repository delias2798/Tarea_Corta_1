/********************************************************************************
** Form generated from reading UI file 'confirmar.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMAR_H
#define UI_CONFIRMAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Confirmar
{
public:
    QPushButton *pushButton_3;
    QListView *listView;
    QListView *listView_2;

    void setupUi(QDialog *Confirmar)
    {
        if (Confirmar->objectName().isEmpty())
            Confirmar->setObjectName(QStringLiteral("Confirmar"));
        Confirmar->resize(621, 413);
        pushButton_3 = new QPushButton(Confirmar);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 350, 121, 22));
        listView = new QListView(Confirmar);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(30, 30, 256, 241));
        listView_2 = new QListView(Confirmar);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(320, 30, 256, 241));

        retranslateUi(Confirmar);

        QMetaObject::connectSlotsByName(Confirmar);
    } // setupUi

    void retranslateUi(QDialog *Confirmar)
    {
        Confirmar->setWindowTitle(QApplication::translate("Confirmar", "Dialog", 0));
        pushButton_3->setText(QApplication::translate("Confirmar", "Confirmar", 0));
    } // retranslateUi

};

namespace Ui {
    class Confirmar: public Ui_Confirmar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMAR_H
