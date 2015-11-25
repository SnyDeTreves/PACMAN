#ifndef TEXTNUMBERITEM
#define TEXTNUMBERITEM

#include "textitem.h"

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

