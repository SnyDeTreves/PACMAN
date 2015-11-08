
#include "../engines/core_kernel.h"

using namespace engine::kernel;

int main(int argc, char *argv[])
{

    Core_kernel *kernel = new Core_kernel(argc,argv);

    return kernel->exec();

    //dans le kernel on va devoir écrire une classe, exemple Game, qui hérite de QApplication et implémente la fonction run, et c'est ça qu'on devra retourner  ici dans le main !
    //ça va remplacer la classe Entity peut-être ? ou core-kernel?
    //en gros ça va être le thread qui représente l'exécution de notre jeu on dirait
    //return new QApplication().run();
}


