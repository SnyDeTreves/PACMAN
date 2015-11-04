#include "pacman.h"

namespace gameplay
{
    Pacman::Pacman(int x, int y, int width=100, int height=100) : Entity(x, y, width, height)
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

    }
}
