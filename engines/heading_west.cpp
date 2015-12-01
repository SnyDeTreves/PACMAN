#include "heading_west.h"

#include <QDebug>

using namespace engine;

QPointF Heading_west::do_deplacment(QPointF from)
{
    return (from + QPointF(0, -50));
}
