#-------------------------------------------------
#
# Project created by QtCreator 2015-10-13T16:25:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = screen1
TEMPLATE = app


SOURCES += main.cpp\
        screen1.cpp

HEADERS  += screen1.h

FORMS    += screen1.ui

RESOURCES += \
    resources.qrc

# deployment on Linux
unix {
    target.path = /usr/bin/
    INSTALLS += target \
}
