#ifndef HEADING_LEFT_H
#define HEADING_LEFT_H

#include "iheading.h"

namespace engine
{
    class Heading_west : public IHeading
    {
    public:
        QPointF do_deplacment(QPointF from);
    };
}

#endif // HEADING_LEFT_H
