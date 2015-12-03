#ifndef TEXTITEM
#define TEXTITEM

/*!
 * \file text_item.h
 * \brief Display text on screen
 * \author Alexandre Leonardi
 */

#include <QGraphicsTextItem>
#include <QString>

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class TextItem
     * \brief Rewriting of the QGraphicsTextItem class
     *
     * The displayed text can contain numbers but it will be static,
     * for a dynamic number display see TextNumberItem.h
     *
     */
    class TextItem : public QGraphicsTextItem
    {
    public:
        /*!
         * \brief Constructor for a TextItem
         * \param text The text to be displayed
         * \param parent The parent of the item, by default it has none
         */
        TextItem(QString text, QGraphicsItem *parent=0);
    };
}

#endif // TEXTITEM

