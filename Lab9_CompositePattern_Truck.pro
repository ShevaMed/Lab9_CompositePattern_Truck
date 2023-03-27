QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cabin.cpp \
    component.cpp \
    composite.cpp \
    engine.cpp \
    factory.cpp \
    framechassis.cpp \
    main.cpp \
    mainwindow.cpp \
    tires.cpp

HEADERS += \
    cabin.h \
    component.h \
    composite.h \
    engine.h \
    factory.h \
    framechassis.h \
    mainwindow.h \
    tires.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
