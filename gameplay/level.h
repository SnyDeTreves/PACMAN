#ifndef LEVEL_H
#define LEVEL_H

#include "engines/core_kernel.h"
#include "engines/engine_graphics.h"
#include "pacman.h"
#include "labyrinth.h"

namespace gameplay{
    class Level
    {
    private:
        engine::Core_kernel *kernel;
        Labyrinth *labyrinth;
        Pacman *pacman;
    public:
        Level(int argc, char *argv[]);
        int exec();
    };
}

#endif // LEVEL_H
