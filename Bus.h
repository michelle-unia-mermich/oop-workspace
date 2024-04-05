#ifndef BUS_H
#define BUS_H
#include <string>
using namespace std;
#include "Vehicle.h"

class Bus: public Vehicle 
{
    private:
        int parking_duration_seconds;
        int discount_percentage;
    public:
        Bus();
        Bus(int ID);
        double getParkingDuration();

    ~Bus()
    {

    };
};

#endif
