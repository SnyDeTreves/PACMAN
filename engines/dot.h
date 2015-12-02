#ifndef DOT_H
#define DOT_H

#include <QPoint>
#include <QString>
#include <QGraphicsPixmapItem>
#include <QObject>
#include "box.h"

namespace engine
{
    class Dot : public QGraphicsPixmapItem, public QObject
    {
    private:
        Box hitbox;
        QString img_path;
    public:
        Dot(int x, int y, int width, int height, QString img_path);
        Dot(QPoint pos, Box box, QString img_path);


        Box get_box(){return hitbox;}
        QString get_img_path(){return img_path;}
    };
}

#endif // DOT_H
