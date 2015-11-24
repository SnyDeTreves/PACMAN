#ifndef ENGINE_GRAPHICS
#define ENGINE_GRAPHICS

#define MAPWIDTH 512
#define MAPHEIGHT 512
#define VMARGIN 50

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QString>
#include <QPixmap>
#include <QGraphicsTextItem>

namespace engine
{
    class Engine_graphics : public QGraphicsView
    {
    private:
        QGraphicsScene *scene;

    public:
        Engine_graphics(QString background_path);
        void add_text(QString text, int number=-1);
    };
}

#endif // ENGINE_GRAPHICS

