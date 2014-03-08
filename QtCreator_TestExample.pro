#-------------------------------------------------
#
# Project created by QtCreator 2014-03-08T23:10:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtCreator_TestExample
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    testexample.cpp \
    testexample2.cpp \
    testexecutor.cpp

HEADERS  += mainwindow.h \
    testexample.h \
    testexample2.h \
    testexecutor.h

FORMS    += mainwindow.ui

QT += testlib
CONFIG(test) {
    DEFINES += __TEST__
}
