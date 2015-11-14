#ifndef WINDOW
#define WINDOW

#include "../engines/engine_graphics.h"

namespace gameplay
{
	class Window
	{
	private:
		Engine_graphics *graph;
	public:
		Window();
		void create_life_display();
		void create_score_display();
		void create_window();
	}
}

#endif // WINDOW
