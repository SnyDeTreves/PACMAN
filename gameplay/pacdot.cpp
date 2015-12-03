#include "pacdot.h"

using namespace gameplay;


PacDot::PacDot(int x, int y, QString img_path): engine::Entity(x,y,img_path)
{

}

PacDot::~PacDot()
{

}

PacDot::PacDot(QPoint pos, QString img_path): engine::Entity(pos,img_path)
{

}
