#include "level.h"

using namespace engine;

Level::Level(Core_kernel *ker)
{
    this->pacman = new Pacman(0,0,ker);
}

Level::Level(Pacman *pac)
{
    this->pacman = pac;
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
