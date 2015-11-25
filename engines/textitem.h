#ifndef TEXTITEM
#define TEXTITEM

#include <QGraphicsTextItem>
#include <QString>

namespace engine
{
    class TextItem : public QGraphicsTextItem
    {
    public:
        TextItem(QString text, QGraphicsItem *parent=0);
    };
}

#endif // TEXTITEM

