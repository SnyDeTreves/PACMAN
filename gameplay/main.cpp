#include "../engines/core_kernel.h"
#include "../engines/engine_graphics.h"
#include "pacman.h"

using namespace engine;
using namespace gameplay;

int main(int argc, char *argv[])
{
   // std::cout << "un" << std::endl;

    Core_kernel kernel(argc,argv);

   // std::cout << "deux" << std::endl;

    Engine_graphics e;

   // std::cout << "trois" << std::endl;

    e.set_background("ressources/pacman_layout.JPG");

   // std::cout << "quatre" << std::endl;

    e.show();

   // std::cout << "cinq" << std::endl;

    Pacman pacman(0,0,"ressources/pacman.png");

   // std::cout << "six" << std::endl;

    e.get_play_zone()->display_character(pacman);

    std::cout << "sept" << std::endl;

    return kernel.exec();
}


