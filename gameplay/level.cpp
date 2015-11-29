#include "level.h"

using namespace gameplay;

Level::Level(int argc, char *argv[])
{
    this->kernel = new engine::Core_kernel(argc, argv);

    engine::Engine_graphics graph(":/ressources/pacman_layout.JPG");

    //this->labyrinth = new Labyrinth("ressources/labyrinth.txt");
    this->pacman = new Pacman(0,0, ":/ressources/pacman.png");

    this->kernel->add_entity(this->pacman);
}

int Level::exec()
{
    return kernel->exec();
}
