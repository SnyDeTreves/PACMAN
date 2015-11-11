#ifndef LEVEL_H
#define LEVEL_H

#include "engines/frame.h"
#include "pacman.h"

class Level
{
private:
    Pacman pacman;
    void on_key_up();
    void on_key_down();
    void on_key_left();
    void on_key_right();
public:
    Level();
};

#endif // LEVEL_H
