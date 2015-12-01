#include "core_kernel.h"
#include <QDebug>

using namespace engine;

#include <QDebug>

Core_kernel::Core_kernel() : QObject()
{
    this->entities_list = std::vector<Entity*>();
}

void Core_kernel::add_entity(Entity *e)
{
    this->entities_list.push_back(e);
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
