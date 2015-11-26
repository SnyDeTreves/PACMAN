#ifndef BOX
#define BOX

/*!
 * \file box.h
 * \brief Collision mask of a game object
 * \author Guélaud Lepetit
 */

/*!
 * \namespace engine
 *
 * Namespace containing the "game engine" side of the project as a library
 */
namespace engine
{
    /*!
     * \class Box
     * \brief Base collider for the game objects of this engine
     *
     * For simplicity purposes, all colliders are squares or rectangles and of type Box
     */
    class Box
    {
    private:
        int width;/*!< width of the collider */
        int height;/*!< height of the collider */
    public:

        /*!
         * \brief Constructor for a custom-sized Box
         * \param width the width of the box, default is 0
         * \param height the height of the box, default is 0
         */
        Box(int width=0, int height=0);

        int get_width(){return width;}
        int get_height(){return height;}
    };
}

#endif // BOX
