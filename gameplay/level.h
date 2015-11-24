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
        Core_kernel *kernel;
        Labyrinth *labyrinth;
        Pacman *pacman;
        void on_key_up();
        void on_key_down();
        void on_key_left();
        void on_key_right();
    public:
        Level(int argc, char *argv[]);
        int exec();
    };
}

#endif // LEVEL_H
