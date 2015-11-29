#ifndef CORE_KERNEL
#define CORE_KERNEL

/*!
 * \file core_kernel.h
 * \brief Core of the game engine
 * \author Guélaud Lepetit
 */

#include <vector>
#include <QApplication>
#include "entity.h"

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class Core_kernel
     * \brief Main application that synchronizes subparts of the engine
     *
     * The Core_kernel stores a pointer to each game object and loops
     * indefinitely, at each turn the behavior of each game object
     * is calculated and displayed
     *
     * Extends QApplication, the main class for graphic applications
     * of Qt
     */
    class Core_kernel //: public QApplication
    {
    private:
        std::vector<Entity*> entities_list; /*!< Vector of all the game objects created, modelized by the Entity class */
    public:
        /*!
         * \brief Core_kernel constructor
         * \param argc number of execution parameters of the main, requested by QApplication
         * \param argv array of execution parameters of the main, requested by QApplication
         */
        Core_kernel(int argc, char* argv[]);

        /*!
         * \brief Adds a game_objeect to entities_list
         * \param e the entity to append
         */
        void add_entity(Entity *e);

        /*!
         * \brief main loop of the program
         *
         * An endless loop that actualises the state of every game object and modifies
         * the display on screen accordingly
         */
        void main_loop();

        /*!
         * \brief Only calls QApplication.exec()
         *
         * Redefined for clarity purposes
         *
         * \return an int
         */
        int exec();
    };
}

#endif // CORE_KERNEL
