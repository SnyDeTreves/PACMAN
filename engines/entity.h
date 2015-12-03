#ifndef ENTITY
#define ENTITY

/*!
 * \file entity.h
 * \brief Base type for game objects
 * \author Guélaud Lepetit
 */

#include <QPoint>
#include <QString>
#include <QGraphicsPixmapItem>
#include <QObject>
#include "box.h"

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class Entity
     * \brief Base type for game objects with core behavior
     *
     * A game object can either be an Entity or a child class of Entity
     * with more specific behavior. Entities are either the hero,
     * the ennemies or any other character or object present in the game;
     *
     * It inherits QGraphicsPixmapItem to be addable to a scene,
     * and QObject to have access to signasl and slots.
     *
     */
    class Entity : public QGraphicsPixmapItem, public QObject
    {
    private:
        Box hitbox; /*!< hitbox of the Entity, can be null i.e. be a 0x0 box */
        QString img_path; /*!< path to the image in the ressources of the project */
    public:
        /*!
         * \brief Constructor for Entity
         * \param x horizontal pos of the Entity in the game window (i.e. the center of its collider)
         * \param y vertical pos of the Entity in the game window (i.e. the center of its collider)
         * \param width width of the object's hitbox once displayed
         * \param height height of the object's hitbox once displayed
         * \param img_path Path in the project ressources to the image representing the object
         */
        Entity(int x, int y, int width, int height, QString img_path);

        /*!
         * \brief Constructor for Entity
         * \param pos position of the center of the object (i.e. the center of its hitbox)
         * \param box hitbox of the object
         * \param img_path Path in the project ressources to the image representing the object
         */
        Entity(QPoint pos, Box box, QString img_path);

        /*!
         * \brief returns true only if the hit box is of null height and width (i.e. both ==0)
         * \return
         */
        bool is_null();

        /*!
         * \brief Implements the behavior of the object
         *
         * This function is called at every frame, the duration of a frame being unknown
         * and it embodies everything the object is supposed to do during a frame
         *
         */
        virtual void update_entity()=0;

        Box get_box(){return hitbox;}
        QString get_img_path(){return img_path;}
    };
}

#endif // ENTITY
