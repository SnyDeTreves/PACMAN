#include "heading_east.h"

using namespace engine;

QPointF Heading_east::do_deplacment(QPointF from)
{
    return (from + QPointF(FPS, 0));
}

