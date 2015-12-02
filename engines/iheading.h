#ifndef HEADING
#define HEADING

#include <QPointF>
#define FPS 0.025
namespace engine
{
    class IHeading
    {
    public:
        virtual QPointF do_deplacment(QPointF from)=0;
    };
}

#endif // HEADING

