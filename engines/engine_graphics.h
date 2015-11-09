#ifndef ENGINE_GRAPHICS
#define ENGINE_GRAPHICS

#include<string>
#include <QWidget>
#include <QPushButton>
#include "entity.h"

using std::string;

namespace engine
{
    class Engine_graphics
    {
    private:
        QWidget main_window;
    public:
        Engine_graphics();

        void display_background(string img_path);
        void display_character(string img_path, Entity character);
        void display_item(string img_path, int x, int y);
    };
}

#endif // ENGINE_GRAPHICS

