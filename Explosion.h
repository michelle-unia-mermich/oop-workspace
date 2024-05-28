#ifndef EXPLOSION_H
#define EXPLOSION_H
#include <string>
#include <tuple>
#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
using namespace std;

class Explosion: public GameEntity, public Effect
{

    public:
        Explosion(){};
        Explosion( int xPos, int yPos)
        {
            position= std::tuple<int,int> (xPos,yPos);
            this->type='E';
        }
        void apply(GameEntity& entity) override
        {
            //modifies the inputted GameEntity object,  sets the position to (-1, -1) and the type to 'X'.
            entity.setPos(-1,-1);
            entity.setType('X');
        }
};

#endif