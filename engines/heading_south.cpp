#include "heading_south.h"

using namespace engine;

QPointF Heading_south::do_deplacment(QPointF from)
{
    return (from + QPointF(0, FPS));
}
