#ifndef CORE_KERNEL
#define CORE_KERNEL

#include <vector>
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include "entity.h"

using namespace engine;

namespace engine
{
    class Core_kernel : public QApplication
    {
    private:
        vector<Entity> entities_list;
    public:
        Core_kernel(int argc, char* argv[]);
        Core_kernel(int argc, char* argv[], vector<Entity> entities);
        void refresh_frame();
    };
}

#endif // CORE_KERNEL
