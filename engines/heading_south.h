#ifndef HEADING_DOWN_H
#define HEADING_DOWN_H

#include "heading.h"

namespace engine
{
    class Heading_south : public Heading
    {
    public:
        QPoint do_deplacment(QPoint from);
    };
}

#endif // HEADING_DOWN_H
