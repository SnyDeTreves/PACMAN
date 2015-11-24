#include "level.h"

using namespace gameplay;

Level::Level(int argc, char *argv[])
{
    this->kernel = new Core_kernel(argc, argv);

    Engine_graphics graph(":/ressources/pacman_layout.JPG");

    //this->labyrinth = new Labyrinth("ressources/labyrinth.txt");
    this->pacman = new Pacman(0,0, ":/ressources/pacman.png");

    this->kernel->add_entity(this->pacman);
}

void Level::on_key_up()
{
    this->pacman->set_heading(&Movment::move_north);
}
void Level::on_key_down()
{
    this->pacman->set_heading(&Movment::move_south);
}
void Level::on_key_left()
{
    this->pacman->set_heading(&Movment::move_east);
}
void Level::on_key_right()
{
    this->pacman->set_heading(&Movment::move_west);
}

int Level::exec()
{
    return kernel->exec();
}
