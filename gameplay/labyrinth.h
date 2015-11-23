#ifndef LABYRINTH_H
#define LABYRINTH_H
#define n_max 40
#define width_wall 15

#include <stdio.h>
#include "engines/entity.h"

namespace gameplay
{
    class Labyrinth
    {
    private:
        bool matrix[n_max][n_max];
    public:
        Labyrinth(char* path_file);
        engine::Entity getWall(int x, int y);
    };
}

#endif // LABYRINTH_H
