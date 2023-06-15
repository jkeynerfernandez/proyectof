QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bomba.cpp \
    main.cpp \
    mainwindow.cpp \
    muro.cpp \
    muro_destruible.cpp \
    personaje.cpp \
    puerta_llave.cpp

HEADERS += \
    bomba.h \
    mainwindow.h \
    muro.h \
    muro_destruible.h \
    personaje.h \
    puerta_llave.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Images.qrc
