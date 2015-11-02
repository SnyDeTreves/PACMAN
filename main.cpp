#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "point.h"


using namespace std;

int main(int argc, char *argv[])
{
    Point a = Point(1, 2);
    Point b = Point(1, 2);
    Point c = Point(1, 3);
    Point d = Point(5, 2);
    Point e = a;
    a.get_pos_x();

    bool ab = a == b;
    cout << (a==b) << endl;

    cout << "a" << endl;

    /*QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));*/

    //dans le kernel on va devoir écrire une classe, exemple Game, qui hérite de QApplication et implémente la fonction run, et c'est ça qu'on devra retourner  ici dans le main !
    //ça va remplacer la classe Entity peut-être ? ou core-kernel?
    //en gros ça va être le thread qui représente l'exécution de notre jeu on dirait
    //return new QApplication().run();
    return 0;
}

