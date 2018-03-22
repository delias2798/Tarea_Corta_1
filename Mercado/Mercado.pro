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
    campagina.cpp \
    confirmar.cpp

HEADERS  += mainwindow.h \
    buy.h \
    campagina.h \
    confirmar.h

FORMS    += mainwindow.ui \
    buy.ui \
    campagina.ui \
    confirmar.ui

RESOURCES += \
    img.qrc
