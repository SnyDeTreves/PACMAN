#ifndef ENGINE_GRAPHICS
#define ENGINE_GRAPHICS

#include<string>
#include "box.h"
#include "entity.h"

using std::string;

namespace engine
{
    namespace graphics
    {
        class Engine_graphics
        {
       public:
            void display_background(string img_path);
            void display_character(string img_path, entity character);
            void display_item(string img_path, int x, int y);
        };
    }
}

#endif // ENGINE_GRAPHICS

