#include "entity.h"

using namespace engine;

void Entity::setCollidable(bool value)
{
    collidable = value;
}

QPointF Entity::getInit_place() const
{
    return init_place;
}

void Entity::setImg(const QString &value)
{
    img_path = value;
    QPixmap *q = new QPixmap(img_path);
    this->setPixmap(*q);

}

QString Entity::getImg_path() const
{
    return img_path;
}

Entity::Entity(int x, int y, QString img_path) : QGraphicsPixmapItem()
{
    this->img_path = img_path;
    setPos(x,y);
    collidable=true;
    this->init_place=pos();
}

Entity::Entity(QPoint pos, QString img_path) : QGraphicsPixmapItem()
{
    this->img_path = img_path;
    setPos(pos);
    collidable=true;
    this->init_place=this->pos();
}

void Entity::resetAtInitPlace()
{
    setPos(init_place);
}
