#ifndef ENGINE_PHYSICS
#define ENGINE_PHYSICS

/*!
 * \file engine_physics.h
 * \brief Module in charge of computing the physic of the game
 * \author Guélaud Lepetit
 */

#include <cmath>
#include "entity.h"

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class Engine_physics
     * \brief The module on charge of calculating the physic of the game
     *
     * In particular, calculation of collision between 2 game objects
     * And moving a game object
     *
     */
    class Engine_physics
    {
    public:
        /*!
         * \brief Tests if two game objects are colliding
         * \param e1 First game object
         * \param e2 Second game object
         * \return true if and only if there both have a collider and are in contact
         */
        static bool is_collision(Entity &e1, Entity &e2);

    };
}

#endif // ENGINE_PHYSICS
