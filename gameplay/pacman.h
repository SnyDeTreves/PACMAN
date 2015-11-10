#ifndef PACMAN_H
#define PACMAN_H

#include <string>
#include <QString>
#include "engines/entity.h"
#include "gameplay/mouvement.h"

namespace gameplay
{
    class Pacman : public engine::Entity
    {
    private:
        QString img_path;
        void (*head)(Entity);
    public:
        Pacman(int x, int y, int width=15, int height=15);
        Pacman(int x, int y, QString img_path, int width=15, int height=15);
        void set_heading(void (*head)(Entity));
        void move();
        void update_entity();
        QString get_img_path(){return img_path;}
    };
}

#endif // PACMAN_H
