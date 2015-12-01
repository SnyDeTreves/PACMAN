#ifndef THREAD_CONTROLLER_H
#define THREAD_CONTROLLER_H

#include <QObject>
#include <QThread>
#include "core_kernel.h"

namespace engine
{
    class Thread_controller : public QObject
    {
        Q_OBJECT

    private:
        QThread thread;
    public:
        Thread_controller();
        ~Thread_controller();
    signals:
        void operate();
        void quit_thread();
    };
}

#endif // THREAD_CONTROLLER_H
