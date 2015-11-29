#ifndef HEADING_RIGHT_H
#define HEADING_RIGHT_H

#include "heading.h"

namespace engine
{
    class Heading_east : public Heading
    {
    public:
        QPoint do_deplacment(QPoint from);
    };
}

#endif // HEADING_RIGHT_H
