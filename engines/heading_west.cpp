#include "heading_west.h"

using namespace engine;

QPointF Heading_west::do_deplacment(QPointF from)
{
    return (from + QPointF(-FPS, 0));
}
