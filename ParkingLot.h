#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <string>
#include "Vehicle.h"

//class definition
class ParkingLot 
{
    private:
        int _max_size;
        int current_size;
        Vehicle * vehicles;

    public:
        ParkingLot();
        ParkingLot(int max_size);
        int getCount(); //get current count
        void parkvehicle(Vehicle* new_vehicle);
        void unparkVehicle(int ID);
        int countOverstayingVehicles(int maxParkingDuration);

    ~ParkingLot()
    {
         delete [] vehicles;
    };
};

#endif