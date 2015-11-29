#include "heading_east.h"

using namespace engine;

QPoint Heading_east::do_deplacment(QPoint from)
{
    return (from + QPoint(0, 1));
}

