#ifndef POINT
#define POINT

#include <iostream>

using namespace std;

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    class Point
    {
    private:
        int x;
        int y;
    public:
        Point();
        Point(int _x, int _y);
        int get_x();
        int get_y();
        Point& operator+=(const Point& rhs);
        Point& operator-=(const Point& rhs);
    };

    inline bool operator==(Point& lhs, Point& rhs)
    {
        return lhs.get_x() == rhs.get_x()
                && lhs.get_y() == rhs.get_y();
    }
    inline bool operator!=(Point& lhs, Point& rhs)
    {
        return lhs.get_x() != rhs.get_x()
                || lhs.get_y() != rhs.get_y();
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
      stream << "(" << p.get_x() << "," << p.get_y() << ")";
      return stream;
    }
}

#endif // POINT
