#-------------------------------------------------
#
# Project created by QtCreator 2014-12-20T11:45:05
#
#-------------------------------------------------

QT       += core gui concurrent

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyTheadedApp
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    myjob.cpp

HEADERS  += dialog.h \
    myjob.h

FORMS    += dialog.ui
