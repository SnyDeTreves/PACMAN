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
        QString img_path; /*!< path to the image in the ressources of the project */
        bool collidable; /*!< Set to true when the Entity can collide with other Entities */
        QPointF init_place; /*!< Initial entity place */
    public:
        /*!
         * \brief Constructor for Entity
         * \param x horizontal pos of the Entity in the game window
         * \param y vertical pos of the Entity in the game window
         * \param height height of the object's hitbox once displayed
         * \param img_path Path in the project ressources to the image representing the object
         */
        Entity(int x, int y, QString img_path);

        /*!
         * \brief Constructor for Entity
         * \param pos position of the center of the object
         * \param img_path Path in the project ressources to the image representing the object
         */
        Entity(QPoint pos, QString img_path);

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

        /*!
         * \brief Returns the name of the Entity subclass being used
         * \return the name of the Entity subclass being used
         */
        virtual QString get_instance()=0;

        /*!
         * Reset the entity at it's initial place
         * \brief setAtInitPlace
         */
        void resetAtInitPlace();

        QString get_img_path(){return img_path;}
        bool is_collidable(){return collidable;}
        void setCollidable(bool value);
        QPointF getInit_place() const;

        /*!
         *Change the entity's image
         * \brief setImg
         * \param value is the path
         */
        void setImg(const QString &value);
        QString getImg_path() const;
    };
}

#endif // ENTITY
