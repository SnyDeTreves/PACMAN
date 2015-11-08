#ifndef ENGINE_PHYSICS
#define ENGINE_PHYSICS

#include <cmath>
#include "box.h"
#include "entity.h"

using namespace engine::physics;
using namespace engine::kernel;

namespace engine
{
    namespace physics
    {
        class Engine_physics
        {
       public:
            Box create_box(int width, int height);
            static bool is_collision(Entity e1, Entity e2);
            static void move_entity(Entity entity, Point to);
        };
    }
}

#endif // ENGINE_PHYSICS
