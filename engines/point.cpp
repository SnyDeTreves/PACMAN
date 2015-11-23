#include "point.h"

using namespace engine;

Point::Point() : x(0), y(0)
{}
Point::Point(int _x, int _y) : x(_x), y(_y)
{}

int Point::get_x()
{
    return this->x;
}

int Point::get_y()
{
    return this->y;
}

Point& Point::operator+=(const Point& rhs)
{
    this->x += rhs.x;
    this->y += rhs.y;
    return *this;
}
Point& Point::operator-=(const Point& rhs)
{
    this->x -= rhs.x;
    this->y -= rhs.y;
    return *this;
}

