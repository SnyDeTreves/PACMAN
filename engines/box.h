#ifndef BOX
#define BOX

namespace engine
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

#endif // BOX
