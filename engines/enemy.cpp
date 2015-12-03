#include "enemy.h"

using namespace engine;

Enemy::Enemy(int x, int y, QString img_path):Entity(x,y,img_path)
{
    ai = new AI();
}

Enemy::Enemy(QPoint pos, QString img_path):Entity(pos,img_path)
{
    ai = new AI();
}

void Enemy::update_entity()
{
}
