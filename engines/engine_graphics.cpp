#include "main_window.h"

using namespace engine;


Main_window::Main_window() : QWidget()
{
    play_zone = new Frame();
    life_label = new QLabel("<font color=#ffffff>Lives left : </font>");
    life_label->setAlignment(Qt::AlignTop);
    score_label = new QLabel("<font color=#ffffff>Score : </font>");
    score_label->setAlignment(Qt::AlignBottom);
    life = new QLCDNumber(7);
    life->setSegmentStyle(QLCDNumber::Filled);
    life->display(3);
    score = new QLCDNumber(7);
    score->setSegmentStyle(QLCDNumber::Filled);
    score->display(0);

    QGridLayout *layout = new QGridLayout();
    layout->addWidget(life_label, 0, 0);
    layout->addWidget(play_zone,1,0,8,8);
    layout->addWidget(score_label, 10, 0);
    layout->addWidget(life,0,1);
    layout->addWidget(score,10,1);

    setLayout(layout);

    setWindowTitle("Pac-Man");
    resize(WIDTH,HEIGHT);
}

void Main_window::display_background(QString img_path)
{
    QPixmap bkgnd(img_path);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

