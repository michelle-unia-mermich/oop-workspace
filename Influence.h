#ifndef INFLUENCE_H
#define INFLUENCE_H

#include "Spot.h"

class Influence //pure abstract class
{

    public:
        virtual void implement(Spot& spot)=0;

};
#endif