#ifndef ENTITY
#define ENTITY

#include "point.h"
#include "box.h"

class Entity
{
private:
    Point position;
    Box hitbox;
public:
    Entity(int x, int y, int width, int weight);
    Entity(Point pos, Box box);
    Point get_pos();
    Box get_box();
    void update_entity();
};

#endif // ENTITY
