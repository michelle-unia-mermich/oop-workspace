#ifndef SNARE_H
#define SNARE_H

#include "Spot.h"
#include "Influence.h"

class Snare: public Spot, public Influence
{
    private:

        bool operative=true; //at first the snare is always operative

    public:
        Snare(int x, int y): Spot(x,y,'S'){}

        bool isOperative()
        {
            return operative;
        }

        void implement(Spot& spot) override
        {
            //Changes a spot's category to 'S'
            spot.setCategory('S');
            //deactivates the snare
            operative=false;
        }

};

#endif