//?In this exam we provide definitions together in the header files, but do we do that in real life?

#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <string>
#include <tuple>
#include <iostream>
//#include "Explosion.h"
//!canot add Explosion.h as a dependency of GameEntity.h since GameEntity.h is a dependency of Explosion.h, it needs to be initialised successfully before Explosion class can be innitialised successfully

using namespace std;

class GameEntity
{
    protected:
        std::tuple<int, int> position; //representing the position of the entity
        char type;
    public:
        GameEntity()
        {

        }
        GameEntity(int x, int y, char type)
        {
            //?How to construct a tuple?
            position= std::tuple<int,int> (x,y);
            //{x,y}
            //?How to get elements out from the tuple  
            //std::get<0>(position) get position 0th form the tuple
            this->type=type;
        }
        //getter functions
        std::tuple<int, int> getPos()
        {
            return position;
        }
        char getType()
        {
            return type;
        }
        //setter functions
        void setPos(int x, int y)
        {
            position= std::tuple<int,int> (x,y);
        }
        void setType(char type)
        {
            this->type=type;
        }

        //virtual functions to use the functions of the child classes
        virtual void move(int dx, int dy){}; //?then should they be normal virtual functions or pure virtual functions (which means there will be non object inintialisatin of this class)?
        //virtual Explosion explode() { };

    ~GameEntity() //?If putting destructor here, public encapsulation?
    {

    };
};

#endif