#include "../engines/core_kernel.h"
#include "../engines/engine_graphics.h"
#include "pacman.h"

using namespace engine;
using namespace gameplay;

int main(int argc, char *argv[])
{
    int &tmp = argc;
    Core_kernel kernel(tmp,argv);

    Engine_graphics graph(":/ressources/pacman_layout.JPG");


    Pacman pacman(0,0,":/ressources/pacman.png");


    return kernel.exec();
}


