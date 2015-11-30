#include "entity.h"
#include "core_kernel.h"

using namespace engine;

Entity::Entity(int x, int y, int width, int height, QString img_path) : QGraphicsPixmapItem(), hitbox(Box(width, height))
{
    this->img_path = img_path;
    setPos(x,y);
}

Entity::Entity(QPoint pos, Box box, QString img_path) : QGraphicsPixmapItem(), hitbox(box)
{
    this->img_path = img_path;
    setPos(pos);
}


bool Entity::is_null()
{
    return (this->get_box().get_height() == 0 && this->get_box().get_height() == 0);
}

void Entity::update_entity()
{}




