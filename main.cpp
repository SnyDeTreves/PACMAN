
#include "engines/core_kernel.h"

using namespace std;

int main(int argc, char *argv[])
{

    engine::kernel::Core_kernel *kernel = new engine::kernel::Core_kernel();

    kernel->run(argc, argv);

    return 0;
    //dans le kernel on va devoir écrire une classe, exemple Game, qui hérite de QApplication et implémente la fonction run, et c'est ça qu'on devra retourner  ici dans le main !
    //ça va remplacer la classe Entity peut-être ? ou core-kernel?
    //en gros ça va être le thread qui représente l'exécution de notre jeu on dirait
    //return new QApplication().run();
}

