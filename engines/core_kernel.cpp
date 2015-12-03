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
<<<<<<< HEAD
         /*   if( QString::compare(((QString) e->getInstance()), "Pacman", Qt::CaseInsensitive) ==0) {
=======
            if( QString::compare(((QString) e->get_instance()), "Pacman", Qt::CaseInsensitive) ==0) {
>>>>>>> 0d856acea2078da9006082750462d790085f981c
               //is it Pacman ?
                for(Entity* d : entities_list)
                {
                    //Search for all the pacdots
<<<<<<< HEAD
                    if( QString::compare(((QString) d->getInstance()), "Pacdot", Qt::CaseInsensitive) ==0) {
                        //collision
=======
                    if( QString::compare(((QString) e->get_instance()), "Pacdot", Qt::CaseInsensitive) ==0) {
                        //Is it a Pacdot ?
                        //collision ?
>>>>>>> 0d856acea2078da9006082750462d790085f981c
                    }
                }

            }*/
        }
    }
}

int Core_kernel::exec()
{
    return app->exec();
}
