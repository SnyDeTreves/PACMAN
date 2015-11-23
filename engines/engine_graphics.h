#ifndef ENGINE_GRAPHICS
#define ENGINE_GRAPHICS

#include <QWidget>
#include <QString>
#include <QGridLayout>
#include <QLabel>
#include <QLCDNumber>
#include <vector>
#include "playzone.h"

#define WIDTH 600
#define HEIGHT 600

namespace engine
{
    class Engine_graphics : public QWidget
    {
    private:
		QGridLayout *layout;
        engine::Playzone *play_zone;
        vector<QLabel*> *labels;
        vector<QLCDNumber*> *numbers;

    public:
        Engine_graphics();
        Engine_graphics(int width, int height);
        void create_label(QString text, int row, int col, int width=1, int height=1, Qt::Alignment alignment=0);
        void create_number(int initial_value, int nb_digit, int row, int col, int width=1, int height=1);
        void set_background(QString background_path);
        engine::Playzone* get_play_zone(){return play_zone;};
    };
}

#endif // ENGINE_GRAPHICS
