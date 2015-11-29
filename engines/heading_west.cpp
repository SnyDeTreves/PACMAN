#include "heading_west.h"

#include <QDebug>

using namespace engine;

QPoint Heading_west::do_deplacment(QPoint from)
{
    qDebug() << "west";
    return (from + QPoint(0, -1));
}
