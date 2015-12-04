#include "engines/thread_controller.h"
#include "engines/engine_graphics.h"
#include "engines/engine_physics.h"
#include "engines/core_kernel.h"
#include "level.h"
#include "pacman.h"
#include "pacdot.h"
#include <QPointF>
#include <QDebug>

using namespace engine;
using namespace gameplay;

# define GAP 23

void ajout_h(std::vector<PacDot*> &pacDot_list, int x, int y, int nb) {
    QPoint pos_dot(x,y);
    for(int i=0; i<nb; i++) {
        x += GAP;
        pos_dot.setX(x);
        pos_dot.setY(y);
        PacDot* dot = new PacDot(pos_dot,":/ressources/dot.png");
        pacDot_list.push_back(dot);
    }
}

void ajout_v(std::vector<PacDot*> &pacDot_list, int x, int y, int nb) {
    QPoint pos_dot(x,y);
    for(int i=0; i<nb; i++) {
        y += GAP;
        pos_dot.setX(x);
        pos_dot.setY(y);
        PacDot* dot = new PacDot(pos_dot,":/ressources/dot.png");
        pacDot_list.push_back(dot);
    }
}

int main(int argc, char *argv[])
{
    Core_kernel ker(argc,argv);

    Engine_graphics graph(":/ressources/sprites/pacman_labyrinth.png");

    QPoint pos(200,200);
    QPoint over(205,205);

    Pacman p(pos,":/ressources/pacman.png");
    Pacman q(over,":/ressources/pacman.png");

    graph.add_entity(p);
    graph.add_entity(q);

//PLACEMENT DES POINTS
    int x=58;
    int y=57;
    QPoint pos_dot(x,y);
    std::vector<PacDot*> pacDot_list = std::vector<PacDot*>();

    //L1
    ajout_h(pacDot_list,2,22,21);
    //L2
    ajout_h(pacDot_list,2,72,21);
    //L3
    ajout_h(pacDot_list,2,127,21);
    //L4
    ajout_h(pacDot_list,52,178,16);
    //L5
    ajout_h(pacDot_list,97,225,12);
    //L6
    ajout_h(pacDot_list,140,275,8);

    //V1
    //ajout_v(pacDot_list,24,22,21);


    //symétrie horizontale

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
    ker.add_entity(q);



    Thread_controller *t = new Thread_controller(ker);

    return ker.exec();
}
