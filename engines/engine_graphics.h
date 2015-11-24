#ifndef ENGINE_GRAPHICS
#define ENGINE_GRAPHICS

#define MAPWIDTH 512
#define MAPHEIGHT 512
#define VMARGIN 50

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QString>
#include <QPixmap>

namespace engine
{
    class Engine_graphics : public QGraphicsView
    {
    private:
        QGraphicsScene *scene;

    public:
        Engine_graphics(QString background_path);
    };
}

#endif // ENGINE_GRAPHICS

