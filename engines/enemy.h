#ifndef ENEMY_H
#define ENEMY_H
/*!
 * \file enemy.h
 * \brief Base enemy for the game
 * \author Ghislain Dugat
 */

#include "ai.h"
#include "entity.h"

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class Enemy
     * \brief Base enemy for the game that has access to several behaviors
     */
    class Enemy : public Entity
    {
    private:
        AI *ai;/*< Instance of the AI class for the ennemy to select a behavior */
    public:
        /*!
         * \brief Constructor for Enemy
         * \param x horizontal pos of the Enemy in the game window (i.e. the center of its collider)
         * \param y vertical pos of the Enemy in the game window (i.e. the center of its collider)
         * \param width width of the object's hitbox once displayed
         * \param height height of the object's hitbox once displayed
         * \param img_path Path in the project ressources to the image representing the object
         */
        Enemy(int x, int y, int width, int height, QString img_path);

        /*!
         * \brief Constructor for Enemy
         * \param pos position of the center of the object (i.e. the center of its hitbox)
         * \param box hitbox of the object
         * \param img_path Path in the project ressources to the image representing the object
         */
        Enemy(QPoint pos, Box box, QString img_path);

        void update_entity();
    };
}


#endif // ENEMY_H

