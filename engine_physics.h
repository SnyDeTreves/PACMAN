#ifndef ENGINE_PHYSICS_H
#define ENGINE_PHYSICS_H

class Engine_physics
{
private:
    class Box
    {
    private:
        int width;
        int height;
    public:
        Box(int width, int height);
        int get_width();
        int get_height();
    };

public:
    static Box create_box(int width, int height);
    static bool is_collision(Entity e1, Entity e2);
};

#endif // ENGINE_PHYSICS_H
