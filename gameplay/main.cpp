#include "../engines/core_kernel.h"
#include "window.h"
#include "pacman.h"

using namespace engine;
using namespace gameplay;

int main(int argc, char *argv[])
{
    //std::cout << "un"<< std::endl;

    Core_kernel kernel(argc,argv);

    Window w("ressources/pacman_layout.JPG");


    //std::cout << "deux"<< std::endl;

    Pacman pacman(0,0,"ressources/pacman.png");

    //std::cout << "trois"<< std::endl;

    w.create_life_display();

    w.create_score_display();

    w.display_pacman(pacman);

    //std::cout << "quatre"<< std::endl;

    return kernel.exec();
}


