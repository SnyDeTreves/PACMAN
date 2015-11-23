#ifndef ENTITY
#define ENTITY

#include "box.h"
#include "point.h"

namespace engine
{
    class Core_kernel;//forward declaration car on ne peut pas inclure directement core_kernel.h => cela créerait une inclusion mutuelle vu que entity.h est inclus dans core_kernel

    class Entity
    {
    private:
        Point position;
        Box hitbox;
        string path_skin;
    public:
        Entity(int x, int y, int width, int height);
        Entity(Point pos, Box box);
        Entity(int x, int y, int width, int height, Core_kernel *ker);
        Entity(Point pos, Box box, Core_kernel *ker);
        Point get_pos();
        Box get_box();
        bool is_null();
        void set_pos(Point to);
        virtual void update_entity();
    };
}

#endif // ENTITY
