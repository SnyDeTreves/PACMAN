#include "main_window.h"


using namespace engine;

Main_window::Main_window() : QMainWindow()
{
    setFixedSize(WIDTH,HEIGHT);
}

void Main_window::background_image(QString img_path)
{
    QPixmap bkgnd(img_path);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

/*void Main_window::background_image(QString img_path)
{
    QImage bg;
    bg.load("/home/laiaga/Documents/git/PACMAN/ressources/pacman_layout.JPG");

    QLabel bg_label;
    bg_label.setPixmap(QPixmap::fromImage(bg));
    bg_label.show();
}*/
