#ifndef HERO
#define HERO

/*!
 * \file hero.h
 * \brief The main charactezr of the game
 * \author Alexandre Leonardi
 */

#include <QKeyEvent>
#include <QPoint>
#include <QString>
#include "iheading.h"
#include "heading_east.h"
#include "heading_north.h"
#include "heading_south.h"
#include "heading_west.h"
#include "unmoving.h"
#include "entity.h"
#include "box.h"

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class Hero
     * \brief Class for the game main character
     *
     * It receives keyboard input from the user  that determine which movment is to be applied
     * For this to be possible, the Hero is set to focusable and focused in its constructor
     *
     * A Hero is an Entity and, by extension, a QGraphicsPixmapItem
     *
     */
    class Hero : public Entity
    {
    protected:
        IHeading *heading;/*!< A concrete instance of the IHeading interface that contains the movment algorithm */
    public:
        /*!
         * \brief Constructor of Hero
         * \param x horizontal position of the center of the hero's hitbox
         * \param y vertical position of the center of the hero's hitbox
         * \param width width of the hitbox
         * \param height height of the hitbox
         * \param img_path Path to the sprite of the Hero in the project ressources
         */
        Hero(int x, int y, int width, int height, QString img_path);

        /*!
         * \brief Constructor of Hero
         * \param pos Position of the center of the hitbox
         * \param box Hitbox of the Hero
         * \param img_path Path to the sprite of the Hero in the project ressources
         */
        Hero(QPoint pos, Box box, QString img_path);

        /*!
         * \brief Receives the keyboard inputs and, if an arrow key has been pressed, changes the value of heading accordingly
         * \param event A Qt item describing the key that has been pressed
         */
        void keyPressEvent(QKeyEvent *event);
    };
}

#endif // HERO

