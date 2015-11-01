#include "point.h"

Point::Point() : pos_x(0), pos_y(0)
{}
Point::Point(int x, int y) : pos_x(x), pos_y(y)
{}

int Point::get_pos_x()
{
    return this->pos_x;
}

int Point::get_pos_y()
{
    return this->pos_y;
}
