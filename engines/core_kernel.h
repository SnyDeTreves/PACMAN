#ifndef CORE_KERNEL
#define CORE_KERNEL

#include <vector>
#include <QApplication>
#include <QPushButton>
#include <QWidget>
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
            Core_kernel();
            Core_kernel(vector<Entity> entities);
            void refresh_frame();
            int run(int argc, char* argv[]);
        };
    }
}

#endif // CORE_KERNEL
