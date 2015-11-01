#include "core_kernel.h"

Core_kernel::Core_kernel(Entity *entities) : entities_list(entities)
{}

void Core_kernel::refresh_frame()
{
    for(Entity entity:entities_list)
    {
        entity.update_entity();
    }
}
