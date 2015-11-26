#include "text_number_item.h"

using namespace engine;

TextNumberItem::TextNumberItem(QString text, int n, QGraphicsItem *parent) : TextItem(text,parent)
{
    number=n;
    setPlainText(text+" : "+QString::number(number));
}
