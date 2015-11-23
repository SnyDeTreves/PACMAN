#include "playzone.h"

using namespace engine;

Playzone::Playzone(QString background_path) : QGraphicsView()
{
    setBackgroundBrush(QBrush(QImage(background_path)));
}

Playzone::Playzone() : QGraphicsView()
{}

void Playzone::set_handler_arrows(void (*on_key_up)(), void (*on_key_down)(), void (*on_key_left)(), void (*on_key_right)())
{
    this->on_key_up = on_key_up;
    this->on_key_down = on_key_down;
    this->on_key_left = on_key_left;
    this->on_key_right = on_key_right;
}

void Playzone::display_character(QString img_path, int x, int y)
{


}

void Playzone::display_item(Entity e)
{

}

void Playzone::keyPressEvent(QKeyEvent *event)
{
    if(character == NULL) return;
    switch (event->key())
    {
    case Qt::Key_Up:
        this->on_key_up;
        break;
    case Qt::Key_Down:
        this->on_key_down;
        break;
    case Qt::Key_Left:
        this->on_key_left;
        break;
    case Qt::Key_Right:
        this->on_key_right;
        break;
    default:
        QGraphicsView::keyPressEvent(event);
    }
}

void Playzone::paintEvent(QPaintEvent *event)
{
    QGraphicsView::paintEvent(event);

}
