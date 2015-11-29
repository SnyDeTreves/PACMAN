#include "heading_east.h"

using namespace engine;

#include <QDebug>

QPoint Heading_east::do_deplacment(QPoint from)
{
    qDebug() << "east";
    return (from + QPoint(0, 1));
}

