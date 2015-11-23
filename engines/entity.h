#ifndef ENTITY
#define ENTITY

#include "box.h"
#include "point.h"

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
        Entity(int x, int y, int width, int weight);
        Entity(Point pos, Box box);
        Point get_pos();
        Box get_box();
        bool is_null();
        void set_pos(Point to);
        void update_entity();
    };
}

#endif // ENTITY
