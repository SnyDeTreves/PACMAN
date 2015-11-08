#ifndef POINT
#define POINT

#include <iostream>

using namespace std;

namespace engine
{
    class Point
    {
    private:
        int pos_x;
        int pos_y;
    public:
        Point();
        Point(int x, int y);
        int get_pos_x();
        int get_pos_y();
        Point& operator+=(const Point& rhs);
        Point& operator-=(const Point& rhs);
    };

    inline bool operator==(Point& lhs, Point& rhs)
    {
        return lhs.get_pos_x() == rhs.get_pos_x()
                && lhs.get_pos_y() == rhs.get_pos_y();
    }
    inline bool operator!=(Point& lhs, Point& rhs)
    {
        return lhs.get_pos_x() != rhs.get_pos_x()
                || lhs.get_pos_y() != rhs.get_pos_y();
    }

    inline Point operator+(Point lhs, const Point& rhs)
    {
      lhs += rhs;
      return lhs;
    }
    inline Point operator-(Point lhs, const Point& rhs)
    {
      lhs -= rhs;
      return lhs;
    }

    inline ostream& operator<<(ostream& stream, Point p)
    {
      stream << "(" << p.get_pos_x() << "," << p.get_pos_y() << ")";
      return stream;
    }
}

#endif // POINT
