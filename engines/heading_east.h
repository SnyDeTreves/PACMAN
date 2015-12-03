#ifndef HEADING_EAST_H
#define HEADING_EAST_H

/*!
 * \file heading_east.h
 * \brief Implementation of the movment to the right
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
     * \class Heading_east
     * \brief Concrete implementation of IHeading interface for the movment to the right
     */
    class Heading_east : public IHeading
    {
    public:
        /*!
         * \brief Takes an origin position and moves it to the right
         * \param from The origin position
         * \return The modified position
         */
        QPointF do_deplacment(QPointF from);
    };
}

#endif // HEADING_RIGHT_H
