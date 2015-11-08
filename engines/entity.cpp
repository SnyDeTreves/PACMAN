#include "entity.h"

namespace engine
{

    Entity::Entity(int x, int y, int width, int height) : position(Point(x, y)), hitbox(Box(width, height))
    {}
    Entity::Entity(Point pos, Box box) : position(pos), hitbox(box)
    {}

    Point Entity::get_pos()
    {
        return this->position;
    }
    Box Entity::get_box()
    {
        return this->hitbox;
    }

    void Entity::set_pos(Point to)
    {
        this->position = to;
    }

    void Entity::update_entity()
    {
        
    }

}

