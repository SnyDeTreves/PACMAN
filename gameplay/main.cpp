#include "level.h"

using namespace gameplay;

int main(int argc, char *argv[])
{
    Level level(argc, argv);

    return level.exec();
}
