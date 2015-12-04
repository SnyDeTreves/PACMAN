#include "ai.h"

using namespace engine;

AI::AI()
{
     srand (time(NULL));
}

QPointF AI::follow(QPointF from)
{
    return from;
}

QPointF AI::block(QPointF from)
{
    return from;
}

QPointF AI::random(QPointF from)
{

    int x = rand() % 3 - 1;
    int y = rand() % 3 - 1;
    return (from + QPointF(FPS*x, FPS*y));
}
