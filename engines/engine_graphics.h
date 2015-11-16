#ifndef ENGINE_GRAPHICS
#define ENGINE_GRAPHICS

#include <QWidget>
#include <QString>
#include <QGridLayout>
#include <QLabel>
#include <QLCDNumber>
#include <vector>
#include <string>
#include "frame.h"

#define WIDTH 512
#define HEIGHT 512

namespace engine
{
    class Engine_graphics : public QWidget
    {
    private:
		QGridLayout *layout;
        engine::Frame *play_zone;
        vector<QLabel*> *labels;
        vector<QLCDNumber*> *numbers;

    public:
        Engine_graphics();
        Engine_graphics(int width, int height);
        void create_label(QString text, int row, int col, int width=1, int height=1, Qt::Alignment alignment=0);
        void create_number(int initial_value, int nb_digit, int row, int col, int width=1, int height=1);
        void set_background(QString img_path);
        engine::Frame* get_play_zone(){return play_zone;};
    };
}

#endif // ENGINE_GRAPHICS
