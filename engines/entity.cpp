#include "entity.h"

namespace engine
{

    Entity::Entity(int x, int y, int width, int height, Core_kernel *ker) : position(Point(x, y)), hitbox(Box(width, height))
    {
        ker->add_entity(*this);
    }
    Entity::Entity(Point pos, Box box,Core_kernel ker) : position(pos), hitbox(box)
    {
        ker->add_entity(*this);
    }

    Point Entity::get_pos()
    {
        return this->position;
    }
    Box Entity::get_box()
    {
        return this->hitbox;
    }

    bool Entity::is_null()
    {
        return (this->get_box().get_width() == 0 && this->get_box().get_height() == 0);
    }

    void Entity::set_pos(Point to)
    {
        this->position = to;
    }

    void Entity::update_entity()
    {
        
    }

}

