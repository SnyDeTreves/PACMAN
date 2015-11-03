#ifndef BOX
#define BOX

namespace engine
{
    namespace physics
    {
        class Box
        {
        private:
            int width;
            int height;
        public:
            Box();
            Box(int width, int height);
            int get_width();
            int get_height();
        };
    }
}

#endif // BOX
