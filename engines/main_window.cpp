#include "main_window.h"

using namespace engine;


Main_window::Main_window() : QWidget()
{
    setFixedSize(WIDTH,HEIGHT);

    QVBoxLayout *layout = new QVBoxLayout;

    life_bar = new QLabel();
    life_bar->setText("<font color=#ffffff>Lifes left : </font>");
    life_bar->setFixedHeight(25);

    QFrame *middle = new QFrame();

    score_bar = new QLabel();
    score_bar->setText("<font color=#ffffff>Score : </font>");
    score_bar->setFixedHeight(25);

    layout->addWidget(life_bar);
    layout->addWidget(middle);
    layout->addWidget(score_bar);

    this->setLayout(layout);
}

void Main_window::display_background(QString img_path)
{
    QPixmap bkgnd(img_path);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

void Main_window::display_character(QString img_path)
{

}

void Main_window::display_item(QString img_path)
{

}
