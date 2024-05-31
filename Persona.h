#ifndef PERSONA_H
#define PERSONA_H

#include "Spot.h"

class Persona: public Spot
{

    public:
        Persona(int x, int y):Spot(x,y,'P'){}
        
        void shift(int dx, int dy)
        {
            int newX = std::get<0>(location) +dx;
            int newY = std::get<1>(location) +dy;
            location = std::make_tuple(newX, newY);
        }


};

#endif