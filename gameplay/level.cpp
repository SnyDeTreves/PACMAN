#include "level.h"

using namespace engine;

Level::Level()
{
    this->pacman = new Pacman();
    Frame frame = new Frame();
}

Level::on_key_up()
{
    this->pacman.set_heading(&Mouvement::move_north);
}
Level::on_key_down()
{
    this->pacman.set_heading(&Mouvement::move_south);
}
Level::on_key_left()
{
    this->pacman.set_heading(&Mouvement::move_east);
}
Level::on_key_right()
{
    this->pacman.set_heading(&Mouvement::move_west);
}
