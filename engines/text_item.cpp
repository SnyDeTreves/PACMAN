#include "text_item.h"

using namespace engine;

TextItem::TextItem(QString text, QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    setPlainText(text);
    setDefaultTextColor(Qt::white);
}
