#ifndef ENGINE_GRAPHICS
#define ENGINE_GRAPHICS

#define MAPWIDTH 512
#define MAPHEIGHT 512

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QString>
#include <QPixmap>
#include <QPoint>
#include <QGraphicsPixmapItem>

#include "text_item.h"
#include "text_number_item.h"

namespace engine
{
    class Engine_graphics : public QGraphicsView
    {
    private:
        QGraphicsScene *scene;

    public:
        Engine_graphics(QString background_path);
        void add_text(QString text, QPoint pos, bool with_numer=false, int number=0);
        void add_character(QString img_path, QPoint pos);
    };
}

#endif // ENGINE_GRAPHICS

