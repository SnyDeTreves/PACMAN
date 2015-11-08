#ifndef MOUVEMENT_H
#define MOUVEMENT_H

#include "engine_physics.h"
#include "entity.h"

using namespace engine::physics;
namespace gameplay
{
    class Mouvement
    {
    public:
        static void move_north(Entity entity);
        static void move_east(Entity entity);
        static void move_south(Entity entity);
        static void move_west(Entity entity);
    };
}

#endif // MOUVEMENT_H
