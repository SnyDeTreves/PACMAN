#include "engine_physics.h"

using namespace engine;

bool Engine_physics::is_collision(Entity e1, Entity e2)
{
    if(e1.is_null() || e2.is_null())
    {
        return false;
    }
    else
    {
        int dif_pos_w = abs(e1.pos().x() - e2.pos().x());
        int dif_pos_h = abs(e1.pos().y() - e2.pos().y());
        int dif_box_w = abs(e1.get_box().get_width() + e2.get_box().get_width());
        int dif_box_h = abs(e1.get_box().get_height() + e2.get_box().get_height());

        return (dif_pos_w <= dif_box_w/2 && dif_pos_h <= dif_box_h/2);
    }
}
