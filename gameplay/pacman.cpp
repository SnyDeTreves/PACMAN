#include "pacman.h"

using namespace gameplay;

Pacman::Pacman(int x, int y, int width, int height) : Hero(x, y, width, height){}

Pacman::Pacman(int x, int y, QString img_path, int width, int height) : Hero(x, y, width, height)
{
    this->img_path = img_path;
}

void Pacman::update_entity()
{
    set_pos(heading->do_deplacment(get_pos()));
}

