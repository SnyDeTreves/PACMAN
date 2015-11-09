#include "pacman.h"

namespace gameplay
{
    Pacman::Pacman(int x, int y, int width=15, int height=15) : Entity(x, y, width, height)
    {
    }

    Pacman::Pacman(int x, int y, QString img_path, int width=15, int height=15) : Entity(x, y, width, height)
    {

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
