TEMPLATE = app

#QT += qml quick
CONFIG += c++11
QT+=widgets

QMAKE_CXXFLAGS += -g -O0

SOURCES += \
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
    engines/ai.cpp\
    engines/enemy.cpp\
    gameplay/pacman.cpp \
    gameplay/main.cpp \
    engines/unmoving.cpp \
    engines/thread_controller.cpp \
    gameplay/pacdot.cpp



RESOURCES += \
    res.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
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
    engines/ai.h\
    engines/enemy.h\
    gameplay/pacman.h \
    engines/unmoving.h \
    engines/iheading.h \
    engines/thread_controller.h \
    gameplay/pacdot.h
