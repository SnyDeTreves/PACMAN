#include "movment.h"
#include "../engines/engine_physics.h"

namespace gameplay
{
    void Movment::move_north(Entity entity)
    {
        Point to = entity.get_pos() + Point(-1, 0);
        Engine_physics::move_entity(entity, to);
    }
    void Movment::move_south(Entity entity)
    {
        Point to = entity.get_pos() + Point(1, 0);
        Engine_physics::move_entity(entity, to);
    }
    void Movment::move_east(Entity entity)
    {
        Point to = entity.get_pos() + Point(0, 1);
        Engine_physics::move_entity(entity, to);
    }
    void Movment::move_west(Entity entity)
    {
        Point to = entity.get_pos() + Point(0, -1);
        Engine_physics::move_entity(entity, to);
    }
}
