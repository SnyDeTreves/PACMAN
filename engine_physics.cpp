#include "engine_physics.h"

class Box
{
    int width;
    int height;

    Box(int width, int height)
    {
        this->width = width;
        this->height = height;
    }

    int Box::get_width()
    {
        return this->width;
    }
    int Box::get_height()
    {
        return this->height;
    }
};

Engine_physics::Box Engine_physics::create_box(int width, int  height)
{
    return Engine_physics::Box(width, height);
}

bool Engine_physics::is_collision(Entity e1, Entity e2)
{
    return false;
}
