#ifndef HEADING_LEFT_H
#define HEADING_LEFT_H

#include "heading.h"

namespace engine
{
    class Heading_west : public Heading
    {
    public:
        QPoint do_deplacment(QPoint from);
    };
}

#endif // HEADING_LEFT_H
