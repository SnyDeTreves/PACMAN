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
    Core_kernel ker(argc,argv);

    Engine_graphics graph(":/ressources/pacman_layout.JPG");

    QPoint pos(200,200);

    Pacman p(pos,":/ressources/pacman.png");

    graph.add_entity(p);



    QPoint pos_d1(310,310);
    PacDot d1(pos_d1,":/ressources/dot.png");
    graph.add_entity(d1);


    ker.add_entity(p);
    ker.add_entity(d1);





    Thread_controller *t = new Thread_controller(ker);

    return ker.exec();
}
