
#include "../engines/core_kernel.h"
#include "../engines/engine_graphics.h"

using namespace engine;

int main(int argc, char *argv[])
{

    kernel::Core_kernel *kernel = new kernel::Core_kernel(argc,argv);

    graphics::Engine_graphics *graphics = new graphics::Engine_graphics();

    graphics->display_background("test");

    return kernel->exec();
}


