#include "../engines/core_kernel.h"
#include "../engines/engine_graphics.h"
#include "../engines/main_window.h"
#include "pacman.h"

using namespace engine;
using namespace gameplay;

int main(int argc, char *argv[])
{
   // std::cout << "un" << std::endl;

    Core_kernel kernel(argc,argv);

   // std::cout << "deux" << std::endl;

    Main_window w;

   // std::cout << "trois" << std::endl;

    w.display_background("ressources/pacman_layout.JPG");

   // std::cout << "quatre" << std::endl;

    w.show();

   // std::cout << "cinq" << std::endl;

    Pacman pacman(0,0,"ressources/pacman.png");

   // std::cout << "six" << std::endl;

    w.get_play_zone()->display_character(pacman);

   // std::cout << "sept" << std::endl;

    return kernel.exec();
}


