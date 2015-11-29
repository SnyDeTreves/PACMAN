#ifndef ENTITY
#define ENTITY

#include <QPoint>
#include <QString>
#include "box.h"

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    class Entity
    {
    private:
        QPoint position;
        Box hitbox;
        QString path_skin;
    public:
        Entity(int x, int y, int width, int height);
        Entity(QPoint pos, Box box);
        QPoint get_pos();
        Box get_box();
        bool is_null();
        void set_pos(QPoint to);
        virtual void update_entity();
    };
}

#endif // ENTITY
