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
        
        Ship( int xPos, int yPos): GameEntity(xPos,yPos,'S'){}
    
        void move(int dx, int dy) override
       {
            //changes the ship's position
            //?The only way to change a value in a tuple is to make a new tuple with the values from the old tuple and the one you want to change and return that.
            std::get<0>(position)=std::get<0>(position)+dx;
            std::get<1>(position)=std::get<1>(position)+dy;
            //or, position = std::tuple<int,int> ( std::get<0>(position)+dx, std::get<1>(position)+dy );

       }
};

#endif