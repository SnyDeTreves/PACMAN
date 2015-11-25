#include "textnumberitem.h"

using namespace engine;

TextNumberItem::TextNumberItem(QString text, int n, QGraphicsItem *parent) : TextItem(text,parent)
{
    number=n;
    setPlainText(text+QString::number(number));
}
