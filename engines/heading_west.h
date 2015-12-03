#ifndef HEADING_WEST_H
#define HEADING_WEST_H

/*!
 * \file heading_west.h
 * \brief Implementation of the movment to the left
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
     * \class Heading_west
     * \brief Concrete implementation of IHeading interface for the movment to the left
     */
    class Heading_west : public IHeading
    {
    public:
        /*!
         * \brief Takes an origin position and moves it to the left
         * \param from The origin position
         * \return The modified position
         */
        QPointF do_deplacment(QPointF from);
    };
}

#endif // HEADING_WEST_H
