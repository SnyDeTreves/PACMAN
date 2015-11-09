#ifndef PACMAN_H
#define PACMAN_H

#include <string>
#include "engines/entity.h"
#include "gameplay/mouvement.h"

namespace gameplay
{
    class Pacman : public engine::Entity
    {
    private:
        string path_skin;
        void (*head)(Entity);
    public:
        Pacman(int x, int y, int width, int height);
        void set_heading(void (*head)(Entity));
        void move();
        void update_entity();
    };
}

#endif // PACMAN_H
