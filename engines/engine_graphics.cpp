#include "engine_graphics.h"

using namespace engine;

Engine_graphics::Engine_graphics(QString background_path) : QGraphicsView()
{
    QPixmap pim(background_path);

    scene = new QGraphicsScene(0,0,pim.width(),pim.height());

    scene->setBackgroundBrush(pim.scaled(pim.width(),pim.height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation));

    this->setGeometry(0,50,pim.width(),pim.height());
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

void Engine_graphics::add_character(QString img_path, QPoint pos)
{
    QGraphicsPixmapItem *item = new QGraphicsPixmapItem();
    item->setPixmap(QPixmap(img_path));
    scene->addItem(item);
    item->setPos(pos);
}
