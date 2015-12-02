#include "pacdot.h"

using namespace gameplay;

#include <QDebug>


PacDot::PacDot(int x, int y, QString img_path, int width, int height): Dot(x,y,width,height,img_path)
{

}

PacDot::PacDot(QPoint pos, engine::Box box, QString img_path): Dot(pos,box,img_path)
{

}
