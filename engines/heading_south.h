#ifndef HEADING_SOUTH_H
#define HEADING_SOUTH_H

/*!
 * \file heading_south.h
 * \brief Implementation of the movment to the bottom
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
     * \class Heading_south
     * \brief Concrete implementation of IHeading interface for the movment to the bottom
     */
    class Heading_south : public IHeading
    {
    public:
        /*!
         * \brief Takes an origin position and moves it to the bottom
         * \param from The origin position
         * \return The modified position
         */
        QPointF do_deplacment(QPointF from);
    };
}

#endif // HEADING_SOUTH_H
