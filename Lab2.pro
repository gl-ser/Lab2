#----------------------------------------------------------------------------#
#                       *** ЛАБОРАТОРНАЯ РАБОТА № 2 ***                      #
#                                                                            #
# Проект для Qt 5                                                            #
#                                                                            #
# Автор ГЛУЩЕНКО Сергей Юрьевич                                              #
#                                                                            #
#                                                   Москва, НИИ ТП, 2023 год #
#----------------------------------------------------------------------------#

QT -= gui

CONFIG += c++11 console

TARGET = Lab2

TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

DESTDIR = $$PWD/APP  #Размещение исполняемого файла

SOURCES += \
    main.cpp \
    Shape.cpp \
    Circle.cpp \
    Rectangle.cpp \
    Square.cpp \
    Canvas.cpp

HEADERS += \
    Shape.h \
    Circle.h \
    Rectangle.h \
    Square.h \
    Canvas.h
