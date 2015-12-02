#include "engine_physics.h"

using namespace engine;

bool Engine_physics::is_collision(Entity e1, Entity e2)
{
    if(e1.is_null() || e2.is_null())
    {
        return false;
    }
    else
    {
        return e1.collidesWithPath(e2.clipPath());
    }
}
