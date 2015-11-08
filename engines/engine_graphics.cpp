#include "engine_graphics.h"

#include <QLabel>
#include <QString>
#include <QPushButton>

using std::string;

namespace engine
{
    Engine_graphics::Engine_graphics()
    {
        main_window = new QWidget();
        main_window->setFixedSize(800,400);
        QPushButton bouton("test",main_window);
        main_window->show();
        //main_window->show();
    }

    void Engine_graphics::display_background(string img_path)
    {
      QPushButton bouton("test",main_window);
      main_window->show();
    }
}
