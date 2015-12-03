#include "pacdot.h"

using namespace gameplay;


PacDot::PacDot(int x, int y, QString img_path, int width, int height): engine::Entity(x,y,width,height,img_path)
{

}

PacDot::PacDot(QPoint pos, engine::Box box, QString img_path): engine::Entity(pos,box,img_path)
{

}
