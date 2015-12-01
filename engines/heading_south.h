#ifndef HEADING_DOWN_H
#define HEADING_DOWN_H

#include "iheading.h"

namespace engine
{
    class Heading_south : public IHeading
    {
    public:
        QPointF do_deplacment(QPointF from);
    };
}

#endif // HEADING_DOWN_H
