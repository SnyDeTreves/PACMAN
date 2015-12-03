#ifndef UNMOVING_H
#define UNMOVING_H

/*!
 * \file unmoving.h
 * \brief Implementation of the absence of movment
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
     * \class unmoving
     * \brief Concrete implementation of IHeading interface for the action not to move
     */
    class Unmoving : public IHeading
    {
    public:
        /*!
         * \brief Takes an origin position and returns it unmodified
         * \param from The origin position
         * \return The unmodified position (i.e. same as from)
         */
        QPointF do_deplacment(QPointF from);
    };
}

#endif // UNMOVING_H
