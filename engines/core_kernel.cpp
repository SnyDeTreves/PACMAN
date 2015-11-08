#include "core_kernel.h"

namespace engine
{
    namespace kernel
    {
        Core_kernel::Core_kernel()
        {
            this->entities_list = vector<Entity>();
        }

        Core_kernel::Core_kernel(vector<Entity> entities)
        {
            this->entities_list = entities;
        }

        void Core_kernel::refresh_frame()
        {
            for(Entity entity:entities_list)
            {
                entity.update_entity();
            }
        }


        int Core_kernel::run(int argc, char* argv[])
        {
            QApplication main_app(argc, argv);

            QWidget fenetre;
            fenetre.setFixedSize(300, 150);

            // Création du bouton, ayant pour parent la "fenêtre"
               QPushButton bouton("Pimp mon bouton !", &fenetre);

               // Affichage de la fenêtre
               fenetre.show();

            return main_app.exec();
        }
    }
}
