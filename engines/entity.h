#ifndef ENTITY
#define ENTITY

#include "box.h"
#include "point.h"
#include "core_kernel.h"

using namespace engine;

namespace engine
{
    class Entity
    {
    private:
        Point position;
        Box hitbox;
        string path_skin;
    public:
        Entity(int x, int y, int width, int height, Core_kernel ker);
        Entity(Point pos, Box box, Core_kernel ker);
        Point get_pos();
        Box get_box();
        void set_pos(Point to);
        void update_entity();
    };
}

#endif // ENTITY
