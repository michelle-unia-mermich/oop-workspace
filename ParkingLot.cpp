#include "ParkingLot.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;

ParkingLot::ParkingLot()
{
    _max_size=0;
    current_size=0;
}

ParkingLot::ParkingLot(int max_size)
{
    _max_size=max_size;
    current_size=0;
    vehicles =new Vehicle[_max_size];
}

int ParkingLot::getCount()
{
    return current_size;
}

void ParkingLot::parkVehicle(Vehicle* new_vehicle)
{
    if(current_size<_max_size)
    {
        vehicles[current_size]=*new_vehicle;
        current_size++;
    }
    else
    {
        cout << "The lot is full"<< endl;
    }
}

void ParkingLot::unparkVehicle(int ID)
{
    //check if there is this ID in the list
    bool have_this_ID=false;
    for (int i=0;i<current_size;i++)
    {
        if(vehicles[i].getID()==ID)
        {
            have_this_ID=true;
            //then also remove from the list 
            delete (vehicles+i);
        }
    }

    if(have_this_ID==false)
    {
        cout << "Vehicle not in the lot"<< endl;
    }
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration)
{
    int count;
    for (int i=0;i<current_size;i++)
    {
        if((vehicles[i].getParkingDuration())>maxParkingDuration)
        {
            count++;
        }
    }
    return count;
}