#ifndef ENGINE_GRAPHICS
#define ENGINE_GRAPHICS

#define MAPWIDTH 512
#define MAPHEIGHT 512

/*!
 * \file engine_graphics.h
 * \brief Module in charge of the screen display
 * \author Alexandre Leonardi
 */

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QString>
#include <QPoint>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include "text_item.h"
#include "text_number_item.h"
#include "entity.h"

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class Engine_graphics
     * \brief Managaes all the screen display part of the engine
     *
     * Inherits of QGraphicsView which is a child of QWidget
     *
     * A view only displays a scene, it is the scene that
     * contains the items to be displayed and the background image
     */
    class Engine_graphics : public QGraphicsView
    {
    private:
        QGraphicsScene *scene; /*!< The scene to be displayed */
        TextNumberItem *score;

    public:
        /*!
         * \brief Constructor for engine_graphics
         *
         * Initializes the scene as well as the Engine_graphics itself
         *
         * \param background_path Path to the image to use as background
         */
        Engine_graphics(QString background_path);

        /*!
         * \brief Displays text on screen
         *
         * Creates an instance of text_item or text_number_item, depending
         * if we want a counter or just plain text, and displays it
         *
         * \param text Text to be displayed
         * \param pos The position of our item, as a QPoint, in pixels
         * \param with_numer Tells if we display a number or not, false by default
         * \param number The initial value of the counter, in case we create a counter, 0 by default
         */
        void add_text(QString text, QPoint pos, bool with_numer=false, int number=0);

        /*!
         * \brief Displays a character on screen
         *
         * Entity inherits QGraphicsPixmapItem and so can be added to the scene
         * and also collide with others QGraphicsItems
         *
         * \param e A reference to the entity to display
         */
        void add_entity(Entity &e);
        void setScore(TextNumberItem *value);
    };
}

#endif // ENGINE_GRAPHICS

