#include "../engines/core_kernel.h"
#include "../engines/engine_graphics.h"
#include "pacman.h"

using namespace engine;
using namespace gameplay;

int main(int argc, char *argv[])
{
    Core_kernel kernel(argc,argv);

    Engine_graphics graph(":/ressources/pacman_layout.JPG");


    Pacman pacman(0,0,":/ressources/pacman.png",&kernel);

    return kernel.exec();
}
