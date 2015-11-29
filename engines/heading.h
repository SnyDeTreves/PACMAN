#ifndef HEADING
#define HEADING

#include <QPoint>

namespace engine
{
    class Heading
    {
    public:
        virtual QPoint do_deplacment(QPoint from)=0;
    };
}

#endif // HEADING

