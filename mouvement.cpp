#include "mouvement.h"

namespace gameplay
{
    void Mouvement::move_north(Entity entity)
    {
        Point to = entity.get_pos() + Point(-1, 0);
        Engine_physics::move(entity, to);
    }
    void Mouvement::move_east(Entity entity)
    {
        Point to = entity.get_pos() + Point(0, 1);
        Engine_physics::move(entity, to);
    }
    void Mouvement::move_south(Entity entity)
    {
        Point to = entity.get_pos() + Point(1, 0);
        Engine_physics::move(entity, to);
    }
    void Mouvement::move_west(Entity entity)
    {
        Point to = entity.get_pos() + Point(0, -1);
        Engine_physics::move(entity, to);
    }
}