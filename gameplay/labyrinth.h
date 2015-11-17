#ifndef LABYRINTH_H
#define LABYRINTH_H
#define n_max 40

#include <stdio.h>

using namespace std;

class Labyrinth
{
private:
    bool matrix[n_max][n_max];
public:
    Labyrinth(char* path_file);
};

#endif // LABYRINTH_H
