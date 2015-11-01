#ifndef POINT
#define POINT

using namespace std;

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
};

inline bool operator==(Point& lhs, Point& rhs)
{
    return lhs.get_pos_x() == rhs.get_pos_x()
            && lhs.get_pos_y() == rhs.get_pos_y();
}

#endif // POINT
