#include "../engines/core_kernel.h"
#include "../engines/engine_graphics.h"
#include "../engines/main_window.h"

using namespace engine;

int main(int argc, char *argv[])
{

    Core_kernel kernel(argc,argv);

    Main_window w;
    w.display_background("ressources/pacman_layout.JPG");
    w.show();

    return kernel.exec();
}


