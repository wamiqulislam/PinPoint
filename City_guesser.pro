QT       += core gui
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    optionswindow.cpp \
    startwindow.cpp

HEADERS += \
    mainwindow.h \
    optionswindow.h \
    startwindow.h

FORMS += \
    mainwindow.ui \
    optionswindow.ui \
    startwindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc

DISTFILES += \
    Graphics/Pakistan map.jpg \
    Graphics/bluepattern2.jpg \
    Music/Cat-C418.mp3 \
    Music/Sweden-C418.mp3
