#ifndef LEVEL_H
#define LEVEL_H

/*!
 * \file level.h
 * \brief Centralisation of the instanciation of the game
 * \author Guélaud Lepetit
 */

#include "engines/core_kernel.h"
#include "engines/engine_graphics.h"
#include "pacman.h"

/*!
 * \namespace gameplay
 *
 * Namespace containing an implementation of our game engine functions in order to have a working game
 */
namespace gameplay{
    /*!
     * \class Level
     * \brief This class regroups all the instanciations and function calls to be done in order to set up the game
     */
    class Level
    {
    private:
        engine::Core_kernel *kernel;/*< The Core_kernel of the game loops and updates all the game objects that were created */
        Pacman *pacman; /*< Main character of the game */
    public:
        /*!
         * \brief Constructor
         *
         * Instanciates all the engines required, and all the game objects, then add them to the Graphics_engine
         * And finaly sets up the thread that embodies the Main_loop function of Core_kernel
         *
         * \param argc Number of arguments of the main, required by lower level functions
         * \param argv Arguments of the main, required by lower level functions
         */
        Level(int argc, char *argv[]);
    };
}

#endif // LEVEL_H
