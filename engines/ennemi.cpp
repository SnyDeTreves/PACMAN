#include "ennemi.h"
#include <QDebug>
using namespace engine;

Ennemi::Ennemi(int x, int y, int width, int height, QString img_path):Entity(x,y,width,height,img_path)
{
    heading = new Unmoving();
}

Ennemi::Ennemi(QPoint pos, Box box, QString img_path):Entity(pos, box,img_path)
{
    heading = new Unmoving();
}

void Ennemi::moveOn()
{
}

