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
        void display_character(Pacman p);
        void display_item(Entity e);
    private:
        enum { BoardWidth = 19, BoardHeight = 22 };
        QLabel *character;
        void keyPressEvent(QKeyEvent *event);
        void paintEvent(QPaintEvent *event);

    };
}

#endif // FRAME_H
