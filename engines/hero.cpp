#include "hero.h"

using namespace engine;

Hero::Hero(int x, int y, int width, int height):Entity(x,y,width,height){}

Hero::Hero(QPoint pos, Box box):Entity(pos, box){}

void Hero::keyPressedEvent(QKeyEvent *event)
{
    switch(event->key())
    {
    case Qt::Key_Left:
        heading = new Heading_west();
        break;
    case Qt::Key_Right:
        heading = new Heading_east();
        break;
    case Qt::Key_Down:
        heading = new Heading_south();
        break;
    case Qt::Key_Up:
        heading = dynamic_cast<Heading*>(new Heading_north());
        break;
    default:
        break;
    }
}
