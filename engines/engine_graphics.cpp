#include "engine_graphics.h"

using namespace engine;

Engine_graphics::Engine_graphics() : QWidget()
{
    play_zone = new Playzone();
    layout = new QGridLayout();
    
    layout->addWidget(play_zone,1,0,8,8);
    
    labels = new vector<QLabel*>();
    numbers = new vector<QLCDNumber*>();
    
    setLayout(layout);
    setForegroundRole(QPalette::Shadow);
    setWindowTitle("Pac-Man");

    resize(WIDTH,HEIGHT);
}

Engine_graphics::Engine_graphics(int width, int height) : QWidget()
{
    play_zone = new Playzone();
    layout = new QGridLayout();
    
    layout->addWidget(play_zone,1,0,8,8);
    
    labels = new vector<QLabel*>();
    numbers = new vector<QLCDNumber*>();
    
    setLayout(layout);
    setWindowTitle("Pac-Man");
    
    resize(width,height);
}

void Engine_graphics::create_label(QString text, int row, int col, int width, int height, Qt::Alignment alignment)
{
    QLabel *l = new QLabel(text);
    if(alignment) l->setAlignment(alignment);
    layout->addWidget(l,row,col,width,height);
    labels->push_back(l);
}

void Engine_graphics::create_number(int initial_value, int nb_digit, int row, int col, int width, int height)
{
    QLCDNumber *n = new QLCDNumber(nb_digit);
    n->setSegmentStyle(QLCDNumber::Flat);
	n->display(initial_value);
    layout->addWidget(n,row,col,width,height);
    numbers->push_back(n);
}

void Engine_graphics::set_background(QString background_path)
{
    play_zone->setBackgroundBrush(QBrush(QImage(background_path)));
}

