#-------------------------------------------------
#
# Project created by QtCreator 2014-03-14T15:51:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cpp-card-draw
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    card.cpp

HEADERS  += mainwindow.hpp \
    card.hpp \
    card_properties.hpp

FORMS    += mainwindow.ui
