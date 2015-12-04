#include "core_kernel.h"

using namespace engine;

void Core_kernel::setScore(TextNumberItem *value)
{
    score = value;
}

Core_kernel::Core_kernel(int &argc, char *argv[]) : QObject()
{
    this->entities_list = std::vector<Entity*>();
    app = new QApplication(argc,argv);
}

void Core_kernel::add_entity(Entity &e)
{
    this->entities_list.push_back(&e);
}

void Core_kernel::main_loop()
{
    bool end =false;
    qDebug()<<pacdots_nb;
    while(!end)
    {
        for(Entity* e : entities_list)
        {
            e->update_entity();


            if( QString::compare(((QString) e->get_instance()), "Pacman", Qt::CaseInsensitive) ==0) {
               //is it Pacman ?

                for(Entity* d : entities_list)
                {
                    //PACDOTS:
                    if( QString::compare(((QString) d->get_instance()), "Pacdot", Qt::CaseInsensitive) ==0) {

                        if(Engine_physics::is_collision(*e,*d)) {
                           qDebug()<<"Collision: Pacdot";
                           points+=10;
                           pacdots_nb--;
                           d->setCollidable(false);
                           d->hide();
                    }

                   //Enemy
                    if( QString::compare(((QString) d->get_instance()), "Enemy", Qt::CaseInsensitive) ==0) {

                        if(Engine_physics::is_collision(*e,*d)) {
                           qDebug()<<"Collision: Ghost";


                           if( ((Enemy*) d)->isVulnerable() ) {
                               points+=200;
                               ((Enemy*) d)->resetAtInitPlace();
                           }
                           else {
                               if(((Hero*) e)->getLife() >= 0 ) {
                                   ((Hero*) e)->looseLife();
                                   qDebug()<<"-1 LIFE";
                                   ((Hero*) e)->resetAtInitPlace();

                               }
                               else {

                                   qDebug()<<"GAME OVER";
                                   end=true;
                               }
                           }
                         }
                       }
                    }
                }

            }
        }
        score->setNumber(points);
        if(pacdots_nb==0) {
            qDebug()<<"WIN!";
            end=true;
        }
    }
}

int Core_kernel::exec()
{
    return app->exec();
}

