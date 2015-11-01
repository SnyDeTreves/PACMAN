#include "box.h"

Box::Box() : width(0), height(0)
{}
Box::Box(int width, int height) : width(width), height(height)
{}

int Box::get_width()
{
    return this->width;
}
int Box::get_height()
{
    return this->height;
}
