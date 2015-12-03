#include "entity.h"

using namespace engine;

Entity::Entity(int x, int y, QString img_path) : QGraphicsPixmapItem()
{
    this->img_path = img_path;
    setPos(x,y);
    collidable=true;
}

Entity::Entity(QPoint pos, QString img_path) : QGraphicsPixmapItem()
{
    this->img_path = img_path;
    setPos(pos);
    collidable=true;
}
