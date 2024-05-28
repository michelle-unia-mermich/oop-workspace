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
        Explosion():GameEntity(0,0,'E'){} //!Experience: must always provide definition for default constructor, not just simply set an empty bracket {} because when calling the object out, nothing will be initialised
        Explosion( int xPos, int yPos):GameEntity(xPos,yPos,'E')
        {
        }
        void apply(GameEntity& entity) override //!here when we pass in GameEntity& object, even if we pass in the child class objects, the compiler will still understand as the base class objects
        {
            //modifies the inputted GameEntity object,  sets the position to (-1, -1) and the type to 'X'.
            entity.setPos(-1,-1); 
            entity.setType('X');
        }
};

#endif