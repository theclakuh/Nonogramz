#-------------------------------------------------
#
# Project created by QtCreator 2011-11-28T15:13:49
#
#-------------------------------------------------

QT       += core gui

TARGET = Nonogramm
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    drawable.cpp \
    matrix.cpp \
    cell.cpp \
    matrixwidget.cpp \
    historyentry.cpp \
    history.cpp \
    mode.cpp \
    solvestrategy.cpp \
    editmode.cpp \
    playmode.cpp \
    bruteforce.cpp \
    game.cpp

HEADERS  += mainwindow.h \
    drawable.h \
    matrix.h \
    cell.h \
    cellstate.h \
    matrixwidget.h \
    level.h \
    historyentry.h \
    history.h \
    mode.h \
    solvestrategy.h \
    editmode.h \
    playmode.h \
    bruteforce.h \
    game.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    TODO.txt \
    CHANGELOG.txt \
    designer.pri
