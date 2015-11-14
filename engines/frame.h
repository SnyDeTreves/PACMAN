#ifndef FRAME_H
#define FRAME_H

#include <QFrame>
#include <QKeyEvent>
#include <QPainter>
#include <QRect>
#include <QPaintEvent>
#include <QLabel>
#include <QGridLayout>
#include "entity.h"
#include "point.h"
#include "../gameplay/pacman.h"

using namespace gameplay;

namespace engine
{
    class Frame : public QFrame
    {
    public:
        Frame();
        void set_handler_arrows(void (*on_key_left)(), void (*on_key_right)(), void (*on_key_up)(), void (*on_key_down)());
        void display_character(Pacman p);
        void display_item(Entity e);
    private:
        enum { BoardWidth = 19, BoardHeight = 22 };
        QLabel *character;
        void (*on_key_left)();
        void (*on_key_right)();
        void (*on_key_up)();
        void (*on_key_down)();
        void keyPressEvent(QKeyEvent *event);
        void paintEvent(QPaintEvent *event);

    };
}

#endif // FRAME_H
