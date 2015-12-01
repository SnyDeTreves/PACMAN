#ifndef UNMOVING_H
#define UNMOVING_H

#include "iheading.h"

namespace engine
{
    class Unmoving : public IHeading
    {
    public:
        QPointF do_deplacment(QPointF from);
    };
}

#endif // UNMOVING_H
