#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QWidget>
#include <QString>
#include <QGridLayout>
#include <QLabel>
#include <QLCDNumber>
#include "entity.h"
#include "frame.h"

#define WIDTH 512
#define HEIGHT 512

namespace engine
{
    class Main_window : public QWidget
    {
    private:
        QLabel *life_label;
        QLabel *score_label;
        QLCDNumber *life;
        QLCDNumber *score;
        engine::Frame *play_zone;

    public:
        Main_window();
        void display_background(QString img_path);
        engine::Frame* get_play_zone(){return play_zone;};
    };
}


#endif // MAIN_WINDOW_H
