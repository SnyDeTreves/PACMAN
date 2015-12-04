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
        bool vulnerability;
        AI *ai;/*< Instance of the AI class for the ennemy to select a behavior */
    public:
        /*!
         * \brief Constructor for Enemy
         * \param x horizontal pos of the Enemy in the game window
         * \param y vertical pos of the Enemy in the game window
         * \param img_path Path in the project ressources to the image representing the object
         */
        Enemy(int x, int y, QString img_path);

        /*!
         * \brief Constructor for Enemy
         * \param pos position of the center of the object
         * \param img_path Path in the project ressources to the image representing the object
         */
        Enemy(QPoint pos,QString img_path);

        bool isVulnerable();

        void update_entity();

        QString get_instance(){return "Enemy";}
    };
}


#endif // ENEMY_H

