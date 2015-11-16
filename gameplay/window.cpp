#include "window.h"

using namespace gameplay;

Window::Window(QString bg_img_path)
{
    graph = new Engine_graphics();
    graph->set_background(bg_img_path);
    std::cout << bg_img_path.toStdString() << std::endl;
    graph->show();
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

void Window::display_pacman(Pacman p)
{
    QString img_path = p.get_img_path();
    graph->get_play_zone()->display_character(img_path,50,50);
}

void Window::create_window()
{
}
