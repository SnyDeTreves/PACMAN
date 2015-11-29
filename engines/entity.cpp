#include "entity.h"
#include "core_kernel.h"

using namespace engine;

Entity::Entity(int x, int y, int width, int height) : position(QPoint(x, y)), hitbox(Box(width, height))
{}

Entity::Entity(QPoint pos, Box box) : position(pos), hitbox(box)
{}

QPoint Entity::get_pos()
{
    return this->position;
}
Box Entity::get_box()
{
    return this->hitbox;
}

bool Entity::is_null()
{
    return (this->get_box().get_height() == 0 && this->get_box().get_height() == 0);
}

void Entity::set_pos(QPoint to)
{
    this->position = to;
}

void Entity::update_entity()
{}




