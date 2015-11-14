#include "pacman.h"

namespace gameplay
{

    Pacman::Pacman(int x, int y, int width, int height) : Entity(x, y, width, height)
    {
    }

    Pacman::Pacman(int x, int y, QString img_path, int width, int height) : Entity(x, y, width, height)
    {
        this->img_path = img_path;
    }

    void Pacman::set_heading(void (*head)(Entity))
    {
        this->head = *head;
    }

    void Pacman::move()
    {
        head(*this);
    }

    void Pacman::update_entity()
    {
        move();
    }
}
