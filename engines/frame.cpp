#include "frame.h"

using namespace engine;

Frame::Frame() : QFrame()
{
    setFrameStyle(QFrame::Panel | QFrame::Sunken);
    setFocusPolicy(Qt::StrongFocus);
    character = NULL;
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
    switch (event->key()) {
    case Qt::Key_Left:

        break;
    case Qt::Key_Right:

        break;
    case Qt::Key_Down:

        break;
    case Qt::Key_Up:

        break;
    default:
        QFrame::keyPressEvent(event);
    }
}

void Frame::paintEvent(QPaintEvent *event)
{
    QFrame::paintEvent(event);

}
