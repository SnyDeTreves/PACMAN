#include "engine_graphics.h"

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

void Engine_graphics::add_text(QString text, QPoint pos, bool with_numer, int number)
{
    TextItem *item;
    if(with_numer)
    {
        item = dynamic_cast<TextItem*>(new TextNumberItem(text,number));
        scene->addItem(item);
    }
    else
    {
        TextItem *item = new TextItem(text);
        scene->addItem(item);
    }
    item->setPos(pos);
}
