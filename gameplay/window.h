#ifndef WINDOW
#define WINDOW

#include "../engines/engine_graphics.h"
#include <QString>
#include <QPointer>

namespace gameplay
{
	class Window
	{
	private:
        QPointer<Engine_graphics> graph;
	public:
        Window(QString bg_img_path);
		void create_life_display();
		void create_score_display();
		void create_window();
    };
}

#endif // WINDOW
