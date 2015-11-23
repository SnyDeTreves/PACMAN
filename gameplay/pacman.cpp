#include "pacman.h"

using namespace gameplay;

Pacman::Pacman(int x, int y, Core_kernel *ker, int width, int height) : Entity(x, y, width, height, ker)
{}

Pacman::Pacman(int x, int y, QString img_path, Core_kernel *ker, int width, int height) : Entity(x, y, width, height, ker)
{
    this->img_path = img_path;
}

void Pacman::set_heading(void (*head)(engine::Entity))
{
    this->head = head;
}

void Pacman::move()
{
    head(*this);
}

void Pacman::update_entity()
{
    move();
}
