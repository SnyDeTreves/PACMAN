
#include "../engines/core_kernel.h"
#include "../engines/engine_graphics.h"

using namespace engine;

int main(int argc, char *argv[])
{

    Core_kernel *kernel = new Core_kernel(argc,argv);

    Engine_graphics *graphics = new Engine_graphics();

    graphics->display_background("test");

    return kernel->exec();
}


