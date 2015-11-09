#include "core_kernel.h"

namespace engine
{

    Core_kernel::Core_kernel(int argc, char* argv[]) : QApplication(argc,argv)
    {
        this->entities_list = vector<Entity>();       
    }

    Core_kernel::Core_kernel(int argc, char* argv[], vector<Entity> entities) : QApplication(argc,argv)
    {
        this->entities_list = entities;
    }

    void Core_kernel::refresh_frame()
    {
        for(Entity entity:entities_list)
        {
            entity.update_entity();
        }
    }
}
