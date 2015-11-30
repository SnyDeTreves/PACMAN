#ifndef PACMAN_H
#define PACMAN_H

#include <string>
#include <QString>
#include <QKeyEvent>
#include "engines/hero.h"
#include "engines/core_kernel.h"
#include "engines/box.h"

namespace gameplay
{
    class Pacman : public engine::Hero
    {
    public:
        Pacman(int x, int y, QString img_path, int width=15, int height=15);
        Pacman(QPoint pos, engine::Box box, QString img_path);
        void update_entity();
    };
}

#endif // PACMAN_H
