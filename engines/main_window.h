#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include <QString>
#include <QLabel>
#include <QImage>

#define WIDTH 512
#define HEIGHT 512

namespace engine
{
    class Main_window : public QMainWindow
    {

    public:
        Main_window();
        void background_image(QString img_path);
    };
}


#endif // MAIN_WINDOW_H
