#include "pacman.h"
#include <QDebug>
using namespace gameplay;

Pacman::Pacman(int x, int y, QString img_path) : Hero(x, y, img_path)
{
    connect(this, SIGNAL(pending_pos(QPointF)), this, SLOT(set_pos(QPointF)));
}

Pacman::Pacman(QPoint pos, QString img_path) : Hero(pos, img_path)
{
    connect(this, SIGNAL(pending_pos(QPointF)), this, SLOT(set_pos(QPointF)));
}

void Pacman::update_entity()
{
    QPointF target = heading->do_deplacment(pos());
    emit pending_pos(target);
}
