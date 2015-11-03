#ifndef CORE_KERNEL
#define CORE_KERNEL

#include <vector>
#include "entity.h"

using namespace engine::kernel;

namespace engine
{
    namespace kernel
    {
        class Core_kernel
        {
        private:
            vector<Entity> entities_list;
        public:
            Core_kernel(vector<Entity> entities);
            void refresh_frame();
        };
    }
}

#endif // CORE_KERNEL
