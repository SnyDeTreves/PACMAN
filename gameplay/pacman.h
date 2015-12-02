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
        Q_OBJECT

    public:
        Pacman(int x, int y, QString img_path, int width=15, int height=15);
        Pacman(QPoint pos, engine::Box box, QString img_path);
        void update_entity();
    public slots:
        void set_pos(QPointF pos){setPos(pos);}
    signals:
        void pending_pos(QPointF pos);
    };
}

#endif // PACMAN_H
