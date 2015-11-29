#include "heading_north.h"

using namespace engine;

#include <QDebug>

QPoint Heading_north::do_deplacment(QPoint from)
{
    qDebug() << "north";
    return (from + QPoint(-1, 0));
}
