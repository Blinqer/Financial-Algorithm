
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BS_Pricer
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += main.cpp\
        mainwindow.cpp \
    bscalc.cpp

HEADERS  += mainwindow.h \
    bscalc.h

FORMS    += mainwindow.ui
