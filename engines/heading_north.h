#ifndef HEADING_UP_H
#define HEADING_UP_H

#include "iheading.h"

namespace engine
{
    class Heading_north : public IHeading
    {
    public:
        QPointF do_deplacment(QPointF from);
    };
}

#endif // HEADING_UP_H
