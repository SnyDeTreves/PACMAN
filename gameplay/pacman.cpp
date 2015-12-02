#include "pacman.h"

using namespace gameplay;

#include <QDebug>

Pacman::Pacman(int x, int y, QString img_path, int width, int height) : Hero(x, y, width, height, img_path)
{
    connect(this, SIGNAL(pending_pos(QPointF)), this, SLOT(set_pos(QPointF)));
}

Pacman::Pacman(QPoint pos, engine::Box box, QString img_path) : Hero(pos, box, img_path)
{
    connect(this, SIGNAL(pending_pos(QPointF)), this, SLOT(set_pos(QPointF)));
}

void Pacman::update_entity()
{

    QPointF bis = heading->do_deplacment(pos());
    emit pending_pos(bis);
    //setPos(test2);
}
