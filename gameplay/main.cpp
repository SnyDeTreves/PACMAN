#include "engines/core_kernel.h"
#include "engines/engine_graphics.h"
#include "level.h"
#include "pacman.h"
#include <QApplication>

using namespace engine;
using namespace gameplay;

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    Core_kernel ker(argc, argv);

    Engine_graphics graph(":/ressources/pacman_layout.JPG");

    Pacman p(100,100);

    QPoint pos(200,200);
    graph.add_character(":/ressources/pacman.png",pos);

    return app.exec();

    //Level l(argc,argv);
    //return l.exec();
}
