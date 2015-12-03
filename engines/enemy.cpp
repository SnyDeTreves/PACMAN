#include "enemy.h"

using namespace engine;

Enemy::Enemy(int x, int y, int width, int height, QString img_path):Entity(x,y,width,height,img_path)
{
    ai = new AI();
}

Enemy::Enemy(QPoint pos, Box box, QString img_path):Entity(pos, box,img_path)
{
    ai = new AI();
}

void Enemy::update_entity()
{
}
