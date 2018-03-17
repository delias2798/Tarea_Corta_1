#-------------------------------------------------
#
# Project created by QtCreator 2018-03-16T07:19:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Mercado
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    buy.cpp \
    carnes.cpp \
    vegetales.cpp \
    frutas.cpp \
    legumbres.cpp \
    enlatados.cpp

HEADERS  += mainwindow.h \
    buy.h \
    carnes.h \
    vegetales.h \
    frutas.h \
    legumbres.h \
    enlatados.h

FORMS    += mainwindow.ui \
    buy.ui \
    carnes.ui \
    vegetales.ui \
    frutas.ui \
    legumbres.ui \
    enlatados.ui

RESOURCES += \
    img.qrc
