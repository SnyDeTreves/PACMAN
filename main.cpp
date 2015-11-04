#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "core_kernel.h"
#include "engine_physics.h"
#include "point.h"
#include "pacman.h"
#include "mouvement.h"

using namespace std;

int main(int argc, char *argv[])
{
    gameplay::Pacman pac = gameplay::Pacman(0, 0, 50, 50);
    pac.set_heading(&gameplay::Mouvement::move_north);
    pac.move();
    pac.move();
    pac.move();

    /*engine::physics::Point a = engine::physics::Point(1, 0);
    engine::physics::Point b = engine::physics::Point(1, 0);
    engine::physics::Point c = engine::physics::Point(1, 2);
    engine::physics::Point d = engine::physics::Point(5, 0);
    engine::physics::Point e = engine::physics::Point(5, 2);
    engine::physics::Point f = a;

    cout << "a==b : " << (a==b) << endl;
    cout << "a==c : " << (a==c) << endl;
    cout << "a==d : " << (a==d) << endl;
    cout << "a==e : " << (a==e) << endl;
    cout << "a==f : " << (a==f) << endl;
    cout << endl;
    cout << "a!=b : " << (a!=b) << endl;
    cout << "a!=c : " << (a!=c) << endl;
    cout << "a!=d : " << (a!=d) << endl;
    cout << "a!=e : " << (a!=e) << endl;
    cout << "a!=f : " << (a!=f) << endl;
    cout << endl;

    cout << "a" << a << endl;
    cout << "b" << b << endl;
    cout << "c" << c << endl;
    cout << endl;

    a += b;
    cout << "a += b" << endl;
    cout << endl;

    cout << "a" << a << endl;
    cout << "b" << b << endl;
    cout << "c" << c << endl;
    cout << endl;

    c = a + b;
    cout << "c = a + b" << endl;
    cout << endl;

    cout << "a" << a << endl;
    cout << "b" << b << endl;
    cout << "c" << c << endl;
    cout << endl;

    a -= b;
    cout << "a -= b" << endl;
    cout << endl;

    cout << "a" << a << endl;
    cout << "b" << b << endl;
    cout << "c" << c << endl;
    cout << endl;

    c = a - b;
    cout << "c = a - b" << endl;
    cout << endl;

    cout << "a" << a << endl;
    cout << "b" << b << endl;
    cout << "c" << c << endl;
    cout << endl;*/

    /*QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));*/

    //dans le kernel on va devoir écrire une classe, exemple Game, qui hérite de QApplication et implémente la fonction run, et c'est ça qu'on devra retourner  ici dans le main !
    //ça va remplacer la classe Entity peut-être ? ou core-kernel?
    //en gros ça va être le thread qui représente l'exécution de notre jeu on dirait
    //return new QApplication().run();
    return 0;
}

