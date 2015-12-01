#include "engines/thread_controller.h"
#include "engines/engine_graphics.h"
#include "level.h"
#include "pacman.h"
#include <QApplication>

using namespace engine;
using namespace gameplay;

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    Engine_graphics graph(":/ressources/pacman_layout.JPG");

    QPoint pos(200,200);
    Box box(15,15);

    Pacman p(pos,box,":/ressources/pacman.png");

    graph.add_entity(p);



    p.setFlags(QGraphicsItem::ItemIsFocusable);
    p.setFocus();

    Thread_controller *t = new Thread_controller();

    return app.exec();
}
