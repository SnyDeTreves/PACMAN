TEMPLATE = app

QT += qml quick
CONFIG += c++11
QT+=widgets

SOURCES += \
    engines/box.cpp \
    engines/core_kernel.cpp \
    engines/engine_physics.cpp \
    engines/entity.cpp \
    engines/point.cpp \
    gameplay/mouvement.cpp \
    gameplay/pacman.cpp \
    gameplay/main.cpp

RESOURCES += qml.qrc

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
    gameplay/mouvement.h \
    gameplay/pacman.h \
    engines/engine_graphics.h

