#include "thread_controller.h"

using namespace engine;

#include <QDebug>

Thread_controller::Thread_controller() :  QObject()
{
    Core_kernel *ker = new Core_kernel();
    ker->moveToThread(&thread);
    connect(&thread, &QThread::finished, ker, &QObject::deleteLater);
    connect(this, &Thread_controller::quit_thread, &thread, &QThread::quit);
    connect(&thread, &QThread::started, ker, &Core_kernel::main_loop);
    thread.start();
}

Thread_controller::~Thread_controller()
{
    thread.quit();
    thread.wait();
}
