#ifndef PACDOT_H
#define PACDOT_H

/*!
 * \file pacdot.h
 * \brief Dots that Pacman picks and that give points
 * \author Loïc Vierin
 */

#include <string>
#include <QString>
#include <QKeyEvent>
#include "engines/entity.h"
#include "engines/core_kernel.h"

/*!
 * \namespace gameplay
 *
 * Namespace containing an implementation of our game engine functions in order to have a working game
 */
namespace gameplay
{
    /*!
     * \class PacDot
     * \brief The dots that have to be picked in order to end the level
     */
    class PacDot : public engine::Entity
    {
    public:
        /*!
         * \brief Constructor
         * \param x abciss of the center of the hitbox of the dot
         * \param y ordonate of the center of the hitbox of the dot
         * \param img_path Path to the sprite of the dot in the project ressources
         * \param width width of the hitbox
         * \param height height of the hitbox
         */
        PacDot(int x, int y, QString img_path);

        ~PacDot();

        /*!
         * \brief Constructor
         * \param pos The position of the center of the hitbox of the point
         * \param box Hitbox of the point
         * \param img_path Path to the sprite of the dot in the project ressources
         */
        PacDot(QPoint pos, QString img_path);

        void update_entity(){};

        /*!
         * \brief Returns the name of the Entity subclass being used
         * \return the name of the Entity subclass being used
         */
        QString get_instance(){return "Pacdot";}
    };
}

#endif // PACDOT_H
