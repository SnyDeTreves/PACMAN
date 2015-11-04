TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    core_kernel.cpp \
    engine_physics.cpp \
    entity.cpp \
    box.cpp \
    point.cpp \
    pacman.cpp \
    mouvement.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    core_kernel.h \
    engine_physics.h \
    entity.h \
    box.h \
    point.h \
    pacman.h \
    mouvement.h

