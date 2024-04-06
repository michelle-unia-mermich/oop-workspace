#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <string>
using namespace std;
#include "Vehicle.h"

class Motorbike: public Vehicle 
{
    private:
        int parking_duration_seconds;
        int discount_percentage;
    public:
        Motorbike();
        Motorbike(int ID);
        int getParkingDuration();

    ~Motorbike()
    {

    };
};

#endif
