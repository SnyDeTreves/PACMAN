#ifndef HEADING
#define HEADING

#include <QPointF>

namespace engine
{
    class IHeading
    {
    public:
        virtual QPointF do_deplacment(QPointF from)=0;
    };
}

#endif // HEADING

