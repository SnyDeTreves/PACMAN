#include "level.h"

using namespace gameplay;

Level::Level(Core_kernel *ker)
{
    //this->labyrinth = new Labyrinth("ressources/labyrinth");
    this->pacman = new Pacman(0,0);

    ker->add_entity(this->pacman);
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
