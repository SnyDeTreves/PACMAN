#ifndef ENGINE_PHYSICS
#define ENGINE_PHYSICS

#include <cmath>
#include "box.h"
#include "entity.h"

namespace engine
{
    class Engine_physics
    {
    public:
        static bool is_collision(Entity e1, Entity e2);
        static void move_entity(Entity entity, Point to);
    };
}

#endif // ENGINE_PHYSICS
