TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        main.cpp \
        mainwindow.cpp \
        nave.cpp

HEADERS += \
    mainwindow.h \
    nave.h

QT += widgets

FORMS += \
    mainwindow.ui
