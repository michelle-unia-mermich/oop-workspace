#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;
#include "Vehicle.h"

class Car: public Vehicle 
{
    private:
        int parking_duration_seconds;
        int discount_percentage;
    public:
        Car();
        Car(int ID);
        int getParkingDuration();

    ~Car()
    {

    };
};

#endif
