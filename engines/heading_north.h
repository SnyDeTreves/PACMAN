#ifndef HEADING_UP_H
#define HEADING_UP_H

#include "iheading.h"

namespace engine
{
    class Heading_north : public IHeading
    {
    public:
        QPoint do_deplacment(QPoint from);
    };
}

#endif // HEADING_UP_H
