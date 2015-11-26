#ifndef TEXTNUMBERITEM
#define TEXTNUMBERITEM

#include "text_item.h"

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    class TextNumberItem : public TextItem
    {
    private:
        int number;
    public:
        TextNumberItem(QString text, int n, QGraphicsItem *parent=0);

        void setNumber(int n){number=n;}
        void increase(){number++;}
        void decrease(){number--;}
        int getNUmber(){return number;}
    };
}

#endif // TEXTNUMBERITEM

