#include "frame.h"

using namespace engine;

Frame::Frame() : QFrame()
{
    setFrameStyle(QFrame::Panel | QFrame::Sunken);
    setFocusPolicy(Qt::StrongFocus);
    character = NULL;
}

void Frame::set_handler_arrows(void (*on_key_up)(), void (*on_key_down)(), void (*on_key_left)(), void (*on_key_right)())
{
    this->on_key_up = on_key_up;
    this->on_key_down = on_key_down;
    this->on_key_left = on_key_left;
    this->on_key_right = on_key_right;
}

void Frame::display_character(Pacman p)
{
    character = new QLabel();
    QPixmap pixmap(p.get_img_path());
//    std::cout << p->get_img_path() << endl;

    character->setPixmap(pixmap);

    QGridLayout *layout = new QGridLayout();
    layout->addWidget(character,0, 0);

    QWidget *corner = new QWidget();
    layout->addWidget(corner,100,100);

    setLayout(layout);

    update();

}

void Frame::display_item(Entity e)
{

}

void Frame::keyPressEvent(QKeyEvent *event)
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
        QFrame::keyPressEvent(event);
    }
}

void Frame::paintEvent(QPaintEvent *event)
{
    QFrame::paintEvent(event);

}
