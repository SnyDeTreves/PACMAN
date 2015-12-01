TEMPLATE = app

#QT += qml quick
CONFIG += c++11
QT+=widgets

QMAKE_CXXFLAGS += -g -O0

SOURCES += \
    engines/box.cpp \
    engines/core_kernel.cpp \
    engines/engine_physics.cpp \
    engines/entity.cpp \
    engines/engine_graphics.cpp \
    engines/text_item.cpp \
    engines/text_number_item.cpp \
    engines/hero.cpp \
    engines/heading_west.cpp \
    engines/heading_south.cpp \
    engines/heading_north.cpp \
    engines/heading_east.cpp \
    gameplay/pacman.cpp \
    gameplay/main.cpp \
    gameplay/level.cpp \
    gameplay/labyrinth.cpp \
    engines/unmoving.cpp \
    engines/thread_controller.cpp



RESOURCES += \
    res.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    engines/box.h \
    engines/core_kernel.h \
    engines/engine_physics.h \
    engines/entity.h \
    engines/engine_graphics.h \
    engines/text_item.h \
    engines/text_number_item.h \
    engines/hero.h \
    engines/heading_east.h \
    engines/heading_west.h \
    engines/heading_north.h \
    engines/heading_south.h \
    gameplay/level.h \
    gameplay/pacman.h \
    gameplay/labyrinth.h \
    engines/unmoving.h \
    engines/iheading.h \
    engines/thread_controller.h
