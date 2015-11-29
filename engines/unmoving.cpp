#include "unmoving.h"

using namespace engine;

#include <QDebug>

QPoint engine::Unmoving::do_deplacment(QPoint from)
{
    qDebug() << "unmoving";
    return from;
}
