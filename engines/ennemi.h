#ifndef ENNEMI
#define ENNEMI

#include <QPoint>
#include <QString>
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
    class Ennemi : public Entity
    {
    private:
    protected:
        IHeading *heading;
    public:
        Ennemi(int x, int y, int width, int height, QString img_path);
        Ennemi(QPoint pos, Box box, QString img_path);
        void update_entity();
        QPoint iA();
    };
}


#endif // ENNEMI

