#ifndef HEADING_RIGHT_H
#define HEADING_RIGHT_H

#include "iheading.h"

namespace engine
{
    class Heading_east : public IHeading
    {
    public:
        QPoint do_deplacment(QPoint from);
    };
}

#endif // HEADING_RIGHT_H
