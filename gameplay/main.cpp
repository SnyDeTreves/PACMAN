#include "engines/thread_controller.h"
#include "engines/engine_graphics.h"
#include "engines/core_kernel.h"
#include "level.h"
#include "pacman.h"
#include "pacdot.h"
#include <QApplication>
#include <QPointF>

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



    QPoint pos_d1(310,310);
    Box box_d1(15,15);
    PacDot d1(pos_d1,box_d1,":/ressources/pacman.png");
    graph.add_entity(d1);

    Core_kernel ker;
    ker.add_entity(&p);
    ker.add_entity(&d1);





    Thread_controller *t = new Thread_controller(ker);

    return app.exec();
}
