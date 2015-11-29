#ifndef PACMAN_H
#define PACMAN_H

#include <string>
#include <QString>
#include <QKeyEvent>
#include "engines/hero.h"
#include "engines/core_kernel.h"

namespace gameplay
{
    class Pacman : public engine::Hero
    {
    private:
        QString img_path;
    public:
        Pacman(int x, int y, int width=15, int height=15);
        Pacman(int x, int y, QString img_path, int width=15, int height=15);
        void update_entity();
        QString get_img_path(){return img_path;}
    };
}

#endif // PACMAN_H
