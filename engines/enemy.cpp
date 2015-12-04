#include "enemy.h"

using namespace engine;

Enemy::Enemy(int x, int y, QString img_path):Entity(x,y,img_path)
{
    vulnerability=false;
    ai = new AI();
}

Enemy::Enemy(QPoint pos, QString img_path):Entity(pos,img_path)
{
    ai = new AI();
}

bool Enemy::isVulnerable()
{
    return vulnerability;

}

void Enemy::update_entity()
{
    //QPointF target = heading->do_deplacment(pos());
    //emit pending_pos(target);
}
