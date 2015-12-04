#ifndef THREAD_CONTROLLER_H
#define THREAD_CONTROLLER_H

/*!
 * \file thread_controller.h
 * \brief Run a thread to parallelize time-consuming functions
 * \author Alexandre Leonardi
 */

#include <QObject>
#include <QThread>
#include "core_kernel.h"

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class Thread_controller
     * \brief Creates a QThread and makes it the Main_loop function of the Core_kernel class
     *
     * Main_loop being an infinite loop, it cannot be run from the main thread  of the application
     * Using a separate thread with QThread allows to run it in background
     *
     */
    class Thread_controller : public QObject
    {
    private:
        Q_OBJECT
        QThread thread;/*< The thread that will hold the main_loop execution */
    public:
        /*!
         * \brief Constructor
         * \param ker An instance of Core_kernel whose Main_loop will be run in the thread
         */
        Thread_controller(Core_kernel &ker);

        ~Thread_controller();

        void start();
    signals:
        void quit_thread();
    };
}

#endif // THREAD_CONTROLLER_H
