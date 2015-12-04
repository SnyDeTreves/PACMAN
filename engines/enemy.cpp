#include "enemy.h"

using namespace engine;

Enemy::Enemy(int x, int y, QString img_path):Entity(x,y,img_path)
{
    vulnerability=false;
    connect(this, SIGNAL(pending_pos(QPointF)), this, SLOT(set_pos(QPointF)));
    ai = new AI();
}

Enemy::Enemy(QPoint pos, QString img_path):Entity(pos,img_path)
{
    connect(this, SIGNAL(pending_pos(QPointF)), this, SLOT(set_pos(QPointF)));
    ai = new AI();
}


void Enemy::update_entity()
{
    QPointF target = ai->random(pos());
    emit pending_pos(target);
}
