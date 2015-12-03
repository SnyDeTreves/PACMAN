#ifndef CORE_KERNEL
#define CORE_KERNEL

/*!
 * \file core_kernel.h
 * \brief Core of the game engine
 * \author Guélaud Lepetit
 */

#include <vector>
#include <QObject>
#include <QApplication>
#include <QDebug>
#include "entity.h"
#include "engine_physics.h"
#include "enemy.h"

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class Core_kernel
     * \brief Main application that synchronizes subparts of the engine
     *
     * The Core_kernel stores a pointer to each game object and loops
     * indefinitely in a separate thread, at each turn the behavior
     * of each game object is calculated and displayed
     *
     * Extends QObject to be able to use signals and slots
     */
    class Core_kernel : public QObject
    {
    private:
        Q_OBJECT
        std::vector<Entity*> entities_list; /*!< Vector of all the game objects created, modelized by the Entity class */
        QApplication *app;/*!< Main application object from Qt */
        int points;/*!< Point counter */
    public:
        /*!
         * \brief Core_kernel constructor
         * \param argc number of execution parameters of the main, requested by QApplication
         * \param argv array of execution parameters of the main, requested by QApplication
         */
        Core_kernel(int &argc, char *argv[]);

        /*!
         * \brief Adds a game_objeect to entities_list
         * \param e the entity to append
         */
        void add_entity(Entity &e);

    public slots:
        /*!
         * \brief Main loop of the engine
         *
         * Infinite loop that runs in a separate thread to avoid latency
         * Through several modules, performs the following :
         * 1) Updates the position of each game object on screen
         * 2) Calculates if game objects collide with each other or the walls
         * 3) Keep texts and numbers displayed up to date
         *
         */
        void main_loop();

        /*!
         * \brief Executes the QApplication
         * \return The QApplication's return value
         */
        int exec();
    };
}

#endif // CORE_KERNEL
