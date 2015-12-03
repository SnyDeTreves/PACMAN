#ifndef AI_H
#define AI_H

/*!
 * \file AI.h
 * \brief Behavior algorithm for the ennemies
 * \author Ghislain Dugat
 */

#include <QPointF>

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class AI
     * \brief The possible behaviors for the ennemies
     *
     * Each possible behavior has an assocAIted function that embodies its algorithm, in order
     * for the ennemy just to call the ad hoc function to apply the behavior.
     *
     */
    class AI
    {
        public:
            /*!
             * \brief This algorithm follow the main character and tries to outrun him
             * \param from The current position of the enemy applying this behavior
             * \return The target position the enemy reaches during the frame
             */
            QPointF follow(QPointF from);

            /*!
             * \brief This algorithm tries to anticipate the main character and block him
             * \param from The current position of the enemy applying this behavior
             * \return The target position the enemy reaches during the frame
             */
            QPointF block(QPointF from);

    };
}

#endif // AI_H
