#include "core_kernel.h"

namespace engine
{

    Core_kernel::Core_kernel(int &argc, char* argv[]) : QApplication(argc,argv)
    {
        this->entities_list = vector<Entity>();       
    }

    Core_kernel::Core_kernel(int &argc, char* argv[], vector<Entity> entities) : QApplication(argc,argv)
    {
        this->entities_list = entities;
    }

    void Core_kernel::add_entity(Entity e)
    {
        this->entities_list.push_back(e);
    }

    void Core_kernel::main_loop()
    {
        for(Entity entity:entities_list)
        {
            entity.update_entity();
        }
    }
}
