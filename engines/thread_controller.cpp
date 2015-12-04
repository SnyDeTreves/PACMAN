#include "thread_controller.h"

using namespace engine;

Thread_controller::Thread_controller(Core_kernel &ker) :  QObject()
{
    ker.moveToThread(&thread);
    connect(&thread, &QThread::finished, &ker, &QObject::deleteLater);
    connect(this, &Thread_controller::quit_thread, &thread, &QThread::quit);
    connect(&thread, &QThread::started, &ker, &Core_kernel::main_loop);
}

void Thread_controller::start()
{
    thread.start();
}

Thread_controller::~Thread_controller()
{
    thread.quit();
    thread.wait();
}
