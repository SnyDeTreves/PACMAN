#include "labyrinth.h"

using namespace gameplay;

Labyrinth::Labyrinth(char* path_file)
{
    FILE * pFile;
    int c;
    pFile = fopen(path_file, "r");
    if(pFile == NULL)
    {
        perror ("Error opening file");
    }
    else
    {
        int i(0);
        do
        {
            int j(0);
            while(j < n_max)
            {
                c = fgetc (pFile);
                this->matrix[i][j] = (c == '1');
                j++;
            }
        } while (c != EOF && i < n_max);
        fclose (pFile);
    }
}

engine::Entity Labyrinth::getWall(int x, int y)
{
    if(this->matrix[x][y]) return engine::Entity(x*width_wall, y*width_wall, width_wall, width_wall);
    else return engine::Entity(x*width_wall, y*width_wall, 0, 0);
}