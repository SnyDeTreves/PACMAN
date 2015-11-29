#ifndef HEADING
#define HEADING

#include <QPoint>

namespace engine
{
    class IHeading
    {
    public:
        virtual QPoint do_deplacment(QPoint from)=0;
    };
}

#endif // HEADING

