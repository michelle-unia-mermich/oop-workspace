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
        Mine(){} //!Borna said that should always provide a default constructor if you have provided a parameterised constructor
        Mine( int xPos, int yPos): GameEntity(xPos,yPos,'M'){}
        Explosion explode()
        {
            Explosion explosionObject;
            type = 'X';
            return explosionObject;
        }
};

#endif