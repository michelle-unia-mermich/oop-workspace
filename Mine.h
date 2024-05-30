#ifndef MINE_H
#define MINE_H
#include <string>
#include <tuple>
#include <iostream>
#include "Explosion.h"
using namespace std;

class Mine: public GameEntity
{
    private:
    public:
        Mine(){} 
        Mine( int xPos, int yPos): GameEntity(xPos,yPos,'M'){}
        Explosion explode()
        {
            Explosion explosionObject(  std::get<0>(this->position),  std::get<1>(this->position));
            //The coordinates of this explosion object must be the same as the Mine. I didn't think of that and put the default constructor to 0,0.
            //!GradeScope tip: when the question is ambiguous and the output is wrong, check if you have understood the question or miss out any parts or overassume anything 
            type = 'X';
            return explosionObject;
        }
};

#endif