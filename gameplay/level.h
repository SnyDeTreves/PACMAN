#ifndef LEVEL_H
#define LEVEL_H

#include "engines/core_kernel.h"
#include "pacman.h"

namespace gameplay{
    class Level
    {
    private:
        Pacman *pacman;
        void on_key_up();
        void on_key_down();
        void on_key_left();
        void on_key_right();
    public:
        Level(Core_kernel *ker);
        Level(Pacman *pac);
    };
}

#endif // LEVEL_H
