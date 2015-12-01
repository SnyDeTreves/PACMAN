#include "heading_east.h"

using namespace engine;

#include <QDebug>

QPointF Heading_east::do_deplacment(QPointF from)
{
    return (from + QPointF(0, 1));
}

