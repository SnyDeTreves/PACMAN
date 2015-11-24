#include "engine_graphics.h"

#include <iostream>

using namespace engine;

Engine_graphics::Engine_graphics(QString background_path) : QGraphicsView()
{
    scene = new QGraphicsScene(0,0,MAPWIDTH,MAPHEIGHT);

    QPixmap pim(background_path);

    scene->setBackgroundBrush(pim.scaled(MAPWIDTH,MAPHEIGHT,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));

    this->setGeometry(0,50,MAPWIDTH,MAPHEIGHT+2*VMARGIN);
    this->setScene(scene);
    this->show();
}
