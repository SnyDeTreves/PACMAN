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

# define GAP 23
/*!
 * Add a horizontal line of pacDots into a PacDot* list;
 * \brief Add a horizontal line
 * \param pacDot_list is where the PacDots are pushed into;
 * \param x start pos x
 * \param y start pos y
 * \param nb # of PacDots
 */
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

/*!
 * Add a vertical line of pacDots into a PacDot* list;
 * \brief Add a vertical line
 * \param pacDot_list is where the PacDots are pushed into;
 * \param x start pos x
 * \param y start pos y
 * \param nb # of PacDots
 */
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

    Pacman p(pos,":/ressources/pacman.png");

    graph.add_entity(p);
    ker.add_entity(p);

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
    ajout_h(pacDot_list,2,127,20);
    //L4
    ajout_h(pacDot_list,52,178,16);
    //L5
    ajout_h(pacDot_list,97,225,12);
    //L6
    ajout_h(pacDot_list,150,275,7);

    int s=675;
    //symétrie sur les horizontaux

    //L1
    ajout_h(pacDot_list,2,s-22,21);
    //L2
    ajout_h(pacDot_list,2,s-72,21);
    //L3
    ajout_h(pacDot_list,2,s-127,20);
    //L4
    ajout_h(pacDot_list,52,s-178,16);
    //L5
    ajout_h(pacDot_list,97,s-225,12);
    //L6
    ajout_h(pacDot_list,150,s-270,7);


    //V1
    ajout_v(pacDot_list,24,130,17);
    //V2
    ajout_v(pacDot_list,74,175,13);
    //V3
    ajout_v(pacDot_list,120,222,9);
    //V4
    ajout_v(pacDot_list,175,275,5);

    //symétrie sur les verticaux
    s=500;
    //V1
    ajout_v(pacDot_list,s-24,130,17);
    //V2
    ajout_v(pacDot_list,s-74,175,13);
    //V3
    ajout_v(pacDot_list,s-120,222,9);
    //V4
    ajout_v(pacDot_list,s-175,275,5);


    for(PacDot* dot : pacDot_list)
    {
        graph.add_entity(*dot);
        ker.add_entity(*dot);
    }



    Thread_controller *t = new Thread_controller(ker);

    return ker.exec();
}
