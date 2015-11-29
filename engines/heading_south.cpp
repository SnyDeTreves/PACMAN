#include "heading_south.h"

using namespace engine;

#include <QDebug>

QPoint Heading_south::do_deplacment(QPoint from)
{
    qDebug() << "south";
    return (from + QPoint(1, 0));
}
