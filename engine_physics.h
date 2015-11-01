#ifndef ENGINE_PHYSICS
#define ENGINE_PHYSICS

#include <cmath>
#include "box.h"
#include "entity.h"

class Engine_physics
{
public:
    static Box create_box(int width, int height);
    static bool is_collision(Entity e1, Entity e2);
};

#endif // ENGINE_PHYSICS
