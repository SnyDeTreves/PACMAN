#include "core_kernel.h"


Core_kernel::Core_kernel(vector<Entity> entities)
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
