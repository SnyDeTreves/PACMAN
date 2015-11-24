TEMPLATE = app

QT += qml quick
CONFIG += c++11
QT+=widgets

QMAKE_CXXFLAGS += -g -O0

SOURCES += \
    engines/box.cpp \
    engines/core_kernel.cpp \
    engines/engine_physics.cpp \
    engines/entity.cpp \
    engines/point.cpp \
    engines/engine_graphics.cpp \
    gameplay/pacman.cpp \
    gameplay/main.cpp \
    gameplay/level.cpp \
    gameplay/labyrinth.cpp \
    gameplay/movment.cpp


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
    engines/point.h \
    gameplay/level.h \
    gameplay/pacman.h \
    gameplay/labyrinth.h \
    gameplay/movment.h \
    engines/engine_graphics.h

