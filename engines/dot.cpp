#include "dot.h"
#include "core_kernel.h"

using namespace engine;


Dot::Dot(int x, int y, int width, int height, QString img_path) : QGraphicsPixmapItem(), hitbox(Box(width, height))
{
    this->img_path = img_path;
    setPos(x,y);

}

Dot::Dot(QPoint pos, Box box, QString img_path) : QGraphicsPixmapItem(), hitbox(box)
{
    this->img_path = img_path;
    setPos(pos);
}
