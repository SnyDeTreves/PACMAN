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

# define GAP 13

void ajout_h(std::vector<PacDot*> &pacDot_list, int nb, int x, int y) {
    QPoint pos_dot(x,y);
    for(int i=0; i<nb; i++) {
        x += GAP;
        pos_dot.setX(x);
        pos_dot.setY(y);
        PacDot* dot = new PacDot(pos_dot,":/ressources/dot.png");
        pacDot_list.push_back(dot);
    }
}

int main(int argc, char *argv[])
{
    Core_kernel ker(argc,argv);

    Engine_graphics graph(":/ressources/pacman_layout.JPG");

    QPoint pos(200,200);

    Pacman p(pos,":/ressources/pacman.png");

    graph.add_entity(p);

//PLACEMENT DES POINTS
    int x=58;
    int y=57;
    QPoint pos_dot(x,y);
    std::vector<PacDot*> pacDot_list = std::vector<PacDot*>();

    ajout_h(pacDot_list,12,58,57);

/*
    for(int i=0; i<12; i++) {
        x += GAP;
        pos_dot.setX(x);
        pos_dot.setY(y);
        PacDot* dot = new PacDot(pos_dot,":/ressources/dot.png");
        pacDot_list.push_back(dot);


    }
*/


    for(PacDot* dot : pacDot_list)
    {
        graph.add_entity(*dot);
        ker.add_entity(*dot);
    }




    ker.add_entity(p);





    Thread_controller *t = new Thread_controller(ker);

    return ker.exec();
}
