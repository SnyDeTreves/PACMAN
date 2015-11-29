#include "heading_west.h"

using namespace engine;

QPoint Heading_west::do_deplacment(QPoint from)
{
    return (from + QPoint(0, -1));
}
