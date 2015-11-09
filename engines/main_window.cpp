#include "main_window.h"


using namespace engine;

Main_window::Main_window() : QMainWindow()
{
    setFixedSize(WIDTH,HEIGHT);
}

void Main_window::display_background(QString img_path)
{
    /*QPixmap bkgnd(img_path);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);*/
    this->setStyleSheet(" background-image: url("+img_path+");");
}

void Main_window::display_character(QString img_path)
{

}

void Main_window::display_item(QString img_path)
{

}
