#include "heading_north.h"

using namespace engine;

#include <QDebug>

QPointF Heading_north::do_deplacment(QPointF from)
{
    return (from + QPointF(0,-FPS));
}
