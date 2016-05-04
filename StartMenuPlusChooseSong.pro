#-------------------------------------------------
#
# Project created by QtCreator 2016-05-03T15:01:43
#
#-------------------------------------------------

QT       += core gui
QT       +=multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StartMenuPlusChooseSong
TEMPLATE = app


SOURCES += main.cpp \
    GameView.cpp \
    StartMenuScene.cpp \
    SongChooseScene.cpp \
    PlayButton.cpp

HEADERS  += \
    GameView.h \
    StartMenuScene.h \
    SongChooseScene.h \
    PlayButton.h
