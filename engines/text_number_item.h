#ifndef TEXTNUMBERITEM
#define TEXTNUMBERITEM

/*!
 * \file text_number_item.h
 * \brief Display text on screen with a dynamic number
 * \author Alexandre Leonardi
 */

#include "text_item.h"

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class TextNumberItem
     * \brief A screen display for text with a dynamic number
     *
     * The value of the number is a private attribute, which means that it
     * can be modified at runtime, for displying score by example
     *
     */
    class TextNumberItem : public TextItem
    {
    private:
        int number; /*< The numeric value of the item */
    public:
        /*!
         * \brief Constructor
         * \param text The text to be displayed
         * \param n The initial value of the number
         * \param parent The parent of the item, by default it has none
         */
        TextNumberItem(QString text, int n, QGraphicsItem *parent=0);

        void setNumber(int n){number=n;}
        void increase(){number++;}
        void decrease(){number--;}
        int getNUmber(){return number;}
    };
}

#endif // TEXTNUMBERITEM

