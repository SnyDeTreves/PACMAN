#ifndef PACDOT_H
#define PACDOT_H

#include <string>
#include <QString>
#include <QKeyEvent>
#include "engines/dot.h"
#include "engines/core_kernel.h"

namespace gameplay
{
    class PacDot : public engine::Dot
    {

    public:
        PacDot(int x, int y, QString img_path, int width=15, int height=15);
        PacDot(QPoint pos, engine::Box box, QString img_path);


    signals:

    public slots:
    };
}

#endif // PACDOT_H
