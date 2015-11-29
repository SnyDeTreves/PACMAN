#ifndef HEADING_UP_H
#define HEADING_UP_H

#include "heading.h"

namespace engine
{
    class Heading_north : public Heading
    {
    public:
        QPoint do_deplacment(QPoint from);
    };
}

#endif // HEADING_UP_H
