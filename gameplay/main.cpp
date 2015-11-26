#include "engines/core_kernel.h"
#include "engines/engine_graphics.h"
#include "level.h"

using namespace engine;
//using namespace gameplay;

int main(int argc, char *argv[])
{
    Core_kernel ker(argc, argv);

    Engine_graphics graph(":/ressources/pacman_layout.JPG");
    graph.add_text("test",true,5);

    return ker.exec();

    //Level l(argc,argv);
    //return l.exec();
}
