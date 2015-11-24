#ifndef CORE_KERNEL
#define CORE_KERNEL

#include <vector>
#include <QApplication>
#include "entity.h"

namespace engine
{
    class Core_kernel : public QApplication
    {
    private:
        vector<Entity*> entities_list;
    public:
        Core_kernel(int &argc, char* argv[]);
        void add_entity(Entity *e);
        void main_loop();
        int exec();
    };
}

#endif // CORE_KERNEL
