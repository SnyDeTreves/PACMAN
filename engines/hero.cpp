#include "hero.h"
#include <QDebug>
using namespace engine;

Hero::Hero(int x, int y, int width, int height, QString img_path):Entity(x,y,width,height,img_path)
{
    heading = new Unmoving();
}

Hero::Hero(QPoint pos, Box box, QString img_path):Entity(pos, box,img_path)
{
    heading = new Unmoving();
}

void Hero::keyPressEvent(QKeyEvent *event)
{
qDebug() << event->key();;
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
        heading = new Heading_north();
        break;
    case Qt::Key_Escape:
        break;

    default:
        break;
    }
}
