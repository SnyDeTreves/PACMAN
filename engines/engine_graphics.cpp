#include "engine_graphics.h"

using namespace engine;

Engine_graphics::Engine_graphics(QString background_path) : QGraphicsView()
{
    QPixmap pim(background_path);

    scene = new QGraphicsScene(0,0,pim.width(),pim.height());

   // scene->setBackgroundBrush(pim.scaled(pim.width(),pim.height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation));

    QGraphicsPixmapItem test(pim);
    scene->addItem(&test);

    setGeometry(0,50,pim.width(),pim.height());
    setScene(scene);
    show();
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

void Engine_graphics::add_entity(Entity &e)
{
    e.setPixmap(QPixmap(e.get_img_path()));
    scene->addItem(&e);
}
