#include "engine_physics.h"

namespace engine
{
    Box Engine_physics::create_box(int width, int  height)
    {
        return Box(width, height);
    }

    bool Engine_physics::is_collision(Entity e1, Entity e2)
    {
        int dif_pos_w = abs(e1.get_pos().get_pos_x() - e2.get_pos().get_pos_x());
        int dif_pos_h = abs(e1.get_pos().get_pos_y() - e2.get_pos().get_pos_y());
        int dif_box_w = abs(e1.get_box().get_width() + e2.get_box().get_width());
        int dif_box_h = abs(e1.get_box().get_height() + e2.get_box().get_height());

        return (dif_pos_w <= dif_box_w/2 && dif_pos_h <= dif_box_h/2);
    }

    void Engine_physics::move_entity(Entity entity, Point to)
    {
        entity.set_pos(to);
    }
}
