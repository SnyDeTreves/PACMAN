#include "heading_south.h"

using namespace engine;

QPoint Heading_south::do_deplacment(QPoint from)
{
    return (from + QPoint(1, 0));
}
