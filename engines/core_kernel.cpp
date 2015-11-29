#include "core_kernel.h"
#include <iostream>

using namespace engine;

Core_kernel::Core_kernel(int argc, char* argv[])// : QApplication(argc,argv)
{
    this->entities_list = std::vector<Entity*>();
}

void Core_kernel::add_entity(Entity *e)
{
    this->entities_list.push_back(e);
}

void Core_kernel::main_loop()
{
    for(Entity *entity:entities_list)
    {
        entity->update_entity();
        std::cout << "test" << std::endl;
    }
    //update_physics -> on teste s'il y a des collisions avec les nouvelles positions des entities
    //update_states -> est-ce qu'il y a eu des modifs du nombre de vies ou du score ?
    //update_graphics -> maintenant que les entity ont bougé, il faut changer leur affichage en conséquence
                        //et éventuellement changer les compteurs

}

int Core_kernel::exec()
{
    //main_loop();
    return QApplication::exec();
}
