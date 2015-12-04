#include "engine_graphics.h"

using namespace engine;

void Engine_graphics::setScore(TextNumberItem *value)
{
    score = value;
    scene->addItem(score);
}

Engine_graphics::Engine_graphics(QString background_path) : QGraphicsView()
{
    QPixmap pim(background_path);
    QGraphicsPixmapItem *background = new QGraphicsPixmapItem(pim);

    scene = new QGraphicsScene();
    scene->setBackgroundBrush(QBrush(Qt::black));
    scene->addItem(background);

    setWindowTitle("Pac-Man");
    setGeometry(0,50,pim.width()+10,pim.height()+10);
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
