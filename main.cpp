#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "core_kernel.h"
#include "engine_physics.h"
#include "point.h"

using namespace std;

int main(int argc, char *argv[])
{
    engine::physics::Point a = engine::physics::Point(1, 0);
    engine::physics::Point b = engine::physics::Point(1, 2);
    engine::physics::Point c = a + b;

    cout << c.get_pos_x() << endl;
    cout << c.get_pos_y() << endl;

    /*QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));*/

    //dans le kernel on va devoir écrire une classe, exemple Game, qui hérite de QApplication et implémente la fonction run, et c'est ça qu'on devra retourner  ici dans le main !
    //ça va remplacer la classe Entity peut-être ? ou core-kernel?
    //en gros ça va être le thread qui représente l'exécution de notre jeu on dirait
    //return new QApplication().run();
    return 0;
}

