#include "../engines/core_kernel.h"
#include "../engines/engine_graphics.h"
#include "../engines/main_window.h"
#include "pacman.h"

using namespace engine;
using namespace gameplay;

int main(int argc, char *argv[])
{

    Core_kernel kernel(argc,argv);

    Main_window w;
    w.display_background("ressources/pacman_layout.JPG");
    w.show();


    Pacman pacman(0,0,"ressources/pacman.png");
    w.get_play_zone()->display_character(pacman);

    return kernel.exec();
}


