#ifndef HEADING_NORTH_H
#define HEADING_NORTH_H

/*!
 * \file heading_north.h
 * \brief Implementation of the movment to the top
 * \author Alexandre Leonardi
 */

#include "iheading.h"

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class Heading_north
     * \brief Concrete implementation of IHeading interface for the movment to the top
     */
    class Heading_north : public IHeading
    {
    public:
        /*!
         * \brief Takes an origin position and moves it to the top
         * \param from The origin position
         * \return The modified position
         */
        QPointF do_deplacment(QPointF from);
    };
}

#endif // HEADING_NORTH_H
