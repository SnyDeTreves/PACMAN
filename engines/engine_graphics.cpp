#include "engine_graphics.h"

using std::string;

namespace engine
{
    Engine_graphics::Engine_graphics()
    {
        //main_window.setFixedSize(800,400);
        //QPushButton bouton("test",&main_window);
        //main_window.show();

        QWidget fenetre;
        fenetre.setFixedSize(800,400);
        QPushButton bouton("test",&fenetre);
        fenetre.show();
    }

    void Engine_graphics::display_background(string img_path)
    {
      //QPushButton bouton("test",main_window);
      main_window.show();
    }
}
