#ifndef HERO
#define HERO

#include <QKeyEvent>
#include <QPoint>
#include "iheading.h"
#include "heading_east.h"
#include "heading_north.h"
#include "heading_south.h"
#include "heading_west.h"
#include "unmoving.h"
#include "entity.h"
#include "box.h"

namespace engine
{
    class Hero : public Entity
    {
    protected:
        IHeading *heading;
    public:
        Hero(int x, int y, int width, int height);
        Hero(QPoint pos, Box box);
        void keyPressedEvent(QKeyEvent *event);
    };
}

#endif // HERO

