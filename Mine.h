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
            //!At first I just call out an empty onject of Explosion like in line 19 even if did not provide any definition for default constructors of Explosion because the ambiguous question only states "return an Explosion object". however be aware if THERE ARE NO DEFAULT DESTRUCTORS' DEFINITION IN THE CLASS, thus if you call an object like this the object is completely empty.
            //!for example, if I print out the .getType() of this object, it does not print out X but a random empty char
            Explosion explosionObject;
            type = 'X';
            return explosionObject;
        }
};

#endif