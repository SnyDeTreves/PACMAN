#include "heading_north.h"

using namespace engine;

QPoint Heading_north::do_deplacment(QPoint from)
{
    return (from + QPoint(-1, 0));
}
