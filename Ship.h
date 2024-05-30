#ifndef SHIP_H
#define SHIP_H
#include <string>
#include <tuple>
#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
using namespace std;

class Ship: public GameEntity
{
    private:
    public:
        //Temporary solution
        bool hasMetMine=false;
        
        Ship( int xPos, int yPos): GameEntity(xPos,yPos,'S'){}
    
        void move(int dx, int dy) override
       {
            //changes the ship's position
            std::get<0>(this->position)=std::get<0>(position)+dx;
            std::get<1>(this->position)=std::get<1>(position)+dy;

       }
};

#endif