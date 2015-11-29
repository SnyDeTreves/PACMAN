#ifndef UNMOVING_H
#define UNMOVING_H

#include "iheading.h"

namespace engine
{
    class Unmoving : public IHeading
    {
    public:
        QPoint do_deplacment(QPoint from);
    };
}

#endif // UNMOVING_H
