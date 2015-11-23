#include "level.h"

using namespace engine;

Level::Level(Core_kernel *ker)
{
    this->pacman = new Pacman(0,0,ker);
}

void Level::on_key_up()
{
    this->pacman->set_heading(&Mouvement::move_north);
}
void Level::on_key_down()
{
    this->pacman->set_heading(&Mouvement::move_south);
}
void Level::on_key_left()
{
    this->pacman->set_heading(&Mouvement::move_east);
}
void Level::on_key_right()
{
    this->pacman->set_heading(&Mouvement::move_west);
}
