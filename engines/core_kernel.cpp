#include "core_kernel.h"
#include <iostream>

using namespace engine;

Core_kernel::Core_kernel(int &argc, char* argv[]) : QApplication(argc,argv)
{
    this->entities_list = vector<Entity*>();
}

void Core_kernel::add_entity(Entity *e)
{
    this->entities_list.push_back(e);
}

void Core_kernel::main_loop()
{
    for(Entity *entity:entities_list)
    {
        entity->update_entity();
        std::cout << "test" << std::endl;
    }
}

int Core_kernel::exec()
{
    //main_loop();
    return QApplication::exec();
}
