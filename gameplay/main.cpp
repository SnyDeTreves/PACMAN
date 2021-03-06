#include "engines/thread_controller.h"
#include "engines/engine_graphics.h"
#include "engines/engine_physics.h"
#include "engines/core_kernel.h"
#include "engines/enemy.h"
#include "pacman.h"
#include "pacdot.h"
#include <QPointF>

#define GAP 23 /*!< Space in pixels between two pacdots */

using namespace engine;
using namespace gameplay;

/*!
 * Add a horizontal line of pacDots into a PacDot* list;
 * \brief Add a horizontal line
 * \param pacDot_list is where the PacDots are pushed into;
 * \param x start pos x
 * \param y start pos y
 * \param nb # of PacDots
 */
void ajout_h(std::vector<PacDot*> &pacDot_list, int x, int y, int nb)
{
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
void ajout_v(std::vector<PacDot*> &pacDot_list, int x, int y, int nb)
{
    QPoint pos_dot(x,y);
    for(int i=0; i<nb; i++) {
        y += GAP;
        pos_dot.setX(x);
        pos_dot.setY(y);
        PacDot* dot = new PacDot(pos_dot,":/ressources/dot.png");
        pacDot_list.push_back(dot);
    }
}

/*!
 * \brief Initialization of all the vertical pacdots
 * \param pacDot_list The list of pacdots for them to be memorized
 */
void centralize_ajout_v(std::vector<PacDot*> &pacDot_list)
{
    //V1
    ajout_v(pacDot_list,24,130,17);
    //V2
    ajout_v(pacDot_list,74,175,13);
    //V3
    ajout_v(pacDot_list,120,222,9);
    //V4
    ajout_v(pacDot_list,175,275,5);

    //symétrie sur les verticaux
    int s=500;

    //V1
    ajout_v(pacDot_list,s-24,130,17);
    //V2
    ajout_v(pacDot_list,s-74,175,13);
    //V3
    ajout_v(pacDot_list,s-120,222,9);
    //V4
    ajout_v(pacDot_list,s-175,275,5);
}

/*!
 * \brief Initialization of all the horizontal pacdots
 * \param pacDot_list The list of pacdots for them to be memorized
 */
void centralize_ajout_h(std::vector<PacDot*> &pacDot_list)

{
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
}






int main(int argc, char *argv[])
{
    Core_kernel ker(argc,argv);
    Engine_graphics graph(":/ressources/sprites/pacman_labyrinth.png");
    std::vector<PacDot*> pacDot_list = std::vector<PacDot*>();
    QPoint pac_default(245,500);
    QPoint center(245,344);
    Pacman p(pac_default,":/ressources/pacman.png");
    Enemy blue(center+QPoint(-30,0),":/ressources/sprites/ghost_blue_east_0.png");
    Enemy red(center+QPoint(-10,0),":/ressources/sprites/ghost_red_east_0.png");
    Enemy pink(center+QPoint(10,0),":/ressources/sprites/ghost_pink_east_0.png");
    Enemy yellow(center+QPoint(30,0),":/ressources/sprites/ghost_yellow_east_0.png");
    Thread_controller *t = new Thread_controller(ker);
    TextNumberItem* score = new TextNumberItem("SCORE:",0);

    //512*687
    //Score
    //graph.add_text("SCORE: ",QPoint(20,10),true,0);
    graph.setScore(score);
    ker.setScore(score);

    //Engine_graphics
    graph.add_entity(p);
    graph.add_entity(blue);
    graph.add_entity(red);
    graph.add_entity(pink);
    graph.add_entity(yellow);

    //Core_kernel
    ker.add_entity(p);
    ker.add_entity(blue);
    ker.add_entity(red);
    ker.add_entity(pink);
    ker.add_entity(yellow);

    //Pacdots
    centralize_ajout_h(pacDot_list);
    centralize_ajout_v(pacDot_list);
    for(PacDot* dot : pacDot_list)
    {
        graph.add_entity(*dot);
        ker.add_entity(*dot);
    }

    //main_loop
    t->start();

    return ker.exec();
}
