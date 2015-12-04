#include "hero.h"

using namespace engine;


Hero::Hero(int x, int y, QString img_path):Entity(x,y,img_path)
{
    setFlags(QGraphicsItem::ItemIsFocusable);
    setFocus();
    heading = new Unmoving();
}

Hero::Hero(QPoint pos,  QString img_path):Entity(pos, img_path)
{
    setFlags(QGraphicsItem::ItemIsFocusable);
    setFocus();
    heading = new Unmoving();
}

void Hero::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
    case Qt::Key_Left:
        heading = new Heading_west();
        this->setImg(":/ressources/sprites/pacman_1_left.png");
        break;
    case Qt::Key_Right:
        heading = new Heading_east();
        this->setImg(":/ressources/sprites/pacman_1_right.png");
        break;
    case Qt::Key_Down:
        heading = new Heading_south();
        this->setImg(":/ressources/sprites/pacman_1_down.png");
        break;
    case Qt::Key_Up:
        heading = new Heading_north();
        this->setImg(":/ressources/sprites/pacman_1_up.png");
        break;
    default:
        break;
    }
}

void Hero::looseLife()
{
    if(life>=0)
        life--;
}

int Hero::getLife() const
{
    return life;
}
