#include "window.h"

using namespace gameplay;

Window::Window()
{
	graph = new Engine_graphics();
}

void Window::create_life_display()
{
	int initial_lives=3;
	int nb_digits=7;
	int row=0;
	int col=0;
	int width=1;
	int height=1;
	
	graph->create_label("<font color=#ffffff>Lives left : </font>", row, col, width, height, Qt::AlignTop);
	graph->create_number(initial_lives,nb_digits,row,col+1,width,height);
}

void Window::create_score_display()
{
	int initial_score=0;
	int nb_digits=7;
	int row=10;
	int col=0;
	int width=1;
	int height=1;
	
	graph->create_label("<font color=#ffffff>Score : </font>",row,col,width,height,Qt::AlignBottom);
	graph->create_number(initial_score,nb_digits,row,col+1,width,height);
}
void Window::create_window()
{
}
