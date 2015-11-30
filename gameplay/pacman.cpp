#include "pacman.h"

using namespace gameplay;


Pacman::Pacman(int x, int y, QString img_path, int width, int height) : Hero(x, y, width, height, img_path)
{}

Pacman::Pacman(QPoint pos, engine::Box box, QString img_path) : Hero(pos, box, img_path)
{}

void Pacman::update_entity()
{
    setPos(heading->do_deplacment(pos().toPoint()));
}

