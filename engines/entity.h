#ifndef ENTITY
#define ENTITY

#include <QPoint>
#include <QString>
#include <QGraphicsPixmapItem>
#include "box.h"

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    class Entity : public QGraphicsPixmapItem
    {
    private:
        Box hitbox;
        QString img_path;
    public:
        Entity(int x, int y, int width, int height, QString img_path);
        Entity(QPoint pos, Box box, QString img_path);
        bool is_null();
        virtual void update_entity();

        Box get_box(){return hitbox;}
        QString get_img_path(){return img_path;}
    };
}

#endif // ENTITY
