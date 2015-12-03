#include "core_kernel.h"

using namespace engine;

Core_kernel::Core_kernel(int &argc, char *argv[]) : QObject()
{
    this->entities_list = std::vector<Entity*>();
    app = new QApplication(argc,argv);
}

void Core_kernel::add_entity(Entity &e)
{
    this->entities_list.push_back(&e);
}

void Core_kernel::main_loop()
{
    while(true)
    {
        for(Entity* e : entities_list)
        {
            e->update_entity();
        }
    }
}

int Core_kernel::exec()
{
    return app->exec();
}
