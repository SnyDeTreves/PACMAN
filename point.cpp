#include "point.h"

namespace engine
{
    namespace physics
    {
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

        Point& Point::operator+=(const Point& rhs)
        {
            this->pos_x += rhs.pos_x;
            this->pos_y += rhs.pos_y;
            return *this;
        }
        Point& Point::operator-=(const Point& rhs)
        {
            this->pos_x -= rhs.pos_x;
            this->pos_y -= rhs.pos_y;
            return *this;
        }
    }
}
