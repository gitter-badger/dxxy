#-------------------------------------------------
#
# Project created by QtCreator 2016-01-04T21:19:06
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app

SOURCES +=\
        dxxywindow.cpp \
        dxxy.cpp \
        components/dxxycomponent.cpp \
        components/dxxyutil.cpp \
        components/bandmap/bandmap.cpp \
        components/dxxywidget.cpp \
        components/bandmap/bandmapview.cpp \
        log/dxxylog.cpp \
        log/dxxylogmanager.cpp \
        main.cpp

HEADERS  +=\
        dxxywindow.h \
        dxxy.h \
        components/dxxycomponent.h \
        components/dxxyutil.h \
        components/bandmap/bandmap.h \
        components/dxxywidget.h \
        components/bandmap/bandmapview.h \
        log/dxxylog.h \
        log/dxxylogmanager.h \

FORMS    += dxxywindow.ui

# Set Buildpath
DESTDIR = ../bin
CONFIG(debug, debug|release) {
        TARGET = dxxyd
}

CONFIG(release, debug|release) {
        TARGET = dxxy
}
