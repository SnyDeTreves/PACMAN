#ifndef PACMAN_H
#define PACMAN_H

/*!
 * \file pacman.h
 * \brief Main character of the game
 * \author Guélaud Lepetit
 */

#include <string>
#include <QString>
#include <QKeyEvent>
#include "engines/hero.h"
#include "engines/core_kernel.h"

/*!
 * \namespace gameplay
 *
 * Namespace containing an implementation of our game engine functions in order to have a working game
 */
namespace gameplay
{
    /*!
     * \class Pacman
     * \brief Child class of Hero that represents the main character
     */
    class Pacman : public engine::Hero
    {
    private:
        Q_OBJECT
    public:
        /*!
         * \brief Constructor
         * \param x abciss of the center of the pacman
         * \param y ordonate of the center of the pacman
         * \param img_path Path to the sprite of the pacman in the project ressources
         */
        Pacman(int x, int y, QString img_path);

        /*!
         * \brief Constructor
         * \param pos The position of the center of the pacman
         * \param img_path Path to the sprite of the pacman in the project ressources
         */
        Pacman(QPoint pos, QString img_path);

        /*!
         * \brief Behavior of the pacman : what it does at each frame
         */
        void update_entity();

        /*!
         * \brief Returns the name of the Entity subclass being used
         * \return the name of the Entity subclass being used
         */
        QString get_instance(){return "Pacman";}
    public slots:
        /*!
         * \brief Connected to the signal pending_pos emited when the Pacman's position is to be changed
         * \param pos The new position to adopt
         */
        void set_pos(QPointF pos){setPos(pos);}
    signals:
        /*!
         * \brief Signal emited from the Core_kernel's Main_loop if the Pacman's  position has been modified
         * \param pos
         */
        void pending_pos(QPointF pos);
    };
}

#endif // PACMAN_H
