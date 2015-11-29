#include "engines/core_kernel.h"
#include "engines/engine_graphics.h"
#include "level.h"
#include "pacman.h"

using namespace engine;
//using namespace gameplay;

int main(int argc, char *argv[])
{
    Core_kernel ker(argc, argv);

    Engine_graphics graph(":/ressources/pacman_layout.JPG");

    QPoint pos(50,50);
    graph.add_text("test",pos,true,5);
    pos.setX(200);
    pos.setY(200);
    graph.add_character(":/ressources/pacman.png",pos);

    gameplay::Pacman p(100,300);
    p.update_entity();

    return ker.exec();

    //Level l(argc,argv);
    //return l.exec();
}
