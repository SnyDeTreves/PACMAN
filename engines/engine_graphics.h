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
#include <QPixmap>
#include <QPoint>
#include <QGraphicsPixmapItem>
#include "text_item.h"
#include "text_number_item.h"

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
         * An instance of QGraphicsPixmapItem is created and added to
         * the scene
         *
         * \param img_path The path to the image to use for the character
         * \param pos The initial position of the character, as a QPoint, in pixels
         */
        void add_character(QString img_path, QPoint pos);
    };
}

#endif // ENGINE_GRAPHICS

