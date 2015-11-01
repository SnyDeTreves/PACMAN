#ifndef CORE_KERNEL_H
#define CORE_KERNEL_H

#include "entity.h"

class Core_kernel
{
private:
    Entity *entities_list;
public:
    Core_kernel(Entity *entities);
    void refresh_frame();
};

#endif // CORE_KERNEL_H
