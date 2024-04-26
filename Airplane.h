#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <string>
using namespace std;
#include "AirVehicle.h"

class Airplane: public AirVehicle
{
    private:
        int numPassengers; 

    public:
        Airplane();
        Airplane(int w,int p); //create a airplane with weight w and no.passengers p
        
        int get_numPassengers();
        void reducePassengers(int x); //reduce passenger by x
        //no setter function for numPassengers

        void fly (int headwind, int minutes) override; //override: it may have an effect on the code but not in this case. This one is for readability.

    ~Airplane()
    {

    };
};

#endif
