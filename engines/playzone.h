#ifndef FRAME_H
#define FRAME_H

#include <QGraphicsView>
#include <QKeyEvent>
#include <QPainter>
#include <QRect>
#include <QPaintEvent>
#include <QLabel>
#include <QGridLayout>
#include <QString>
#include <QBrush>
#include <QImage>
#include "entity.h"
#include "point.h"
#include "../gameplay/pacman.h"

using namespace gameplay;

namespace engine
{
    class Playzone : public QGraphicsView
    {
    public:
        Playzone(QString background_path);
        Playzone();
        void set_handler_arrows(void (*on_key_left)(), void (*on_key_right)(), void (*on_key_up)(), void (*on_key_down)());
        void display_character(QString img_path, int x, int y);
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
