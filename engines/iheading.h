#ifndef HEADING
#define HEADING
#define FPS 0.025

/*
 * \file iheading.h
 * \brief Interface for the hero's movment class
 * \author Alexandrre Leonardi
 * */

#include <QPointF>


/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class IHeading
     * \brief Interface for the heading classes (used by the Hero class)
     *
     * The idea is to use the Strategy pattern to have en easily modifiable movment
     * The Hero doesn't know how its movment works, it just uses IHeading->do_deplacment
     *
     */
    class IHeading
    {
    public:
        /*!
         * \brief Takes a position and calculates a new position
         *
         * The way the final position is calculated is unknown here, and depends only of the implementations
         * This interface is intended to be used with the Hero class, by taking its current position
         * and returning its target position.
         *
         * \param from A position on screen, as QPointF
         * \return A new position on screen, as QPointF
         */
        virtual QPointF do_deplacment(QPointF from)=0;
    };
}

#endif // HEADING

