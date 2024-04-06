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
    vehicles =new Vehicle*[_max_size]; //the pointer points to Vehicles objects so when Car, Bus, Motorbike are added, they are all converted to Vehicle type
}

int ParkingLot::getCount()
{
    return current_size;
}

void ParkingLot::parkVehicle(Vehicle* new_vehicle)
{
    if(current_size<_max_size)
    {
        //vehicles[current_size]= new Vehicle(new_vehicle->getID());//current_size does not represent the available index
        for(int i=0; i<_max_size; i++) //luot het array bao gom nhung cho trong vi cho dau xe khong lien tuc
        {
            if (vehicles[i]==NULL) //OR if (vehicles[i]==nullptr) 
            {
                vehicles[i]= new Vehicle(new_vehicle->getID());
                break; //break applies for loops, only two things, for loop and while //if not break the same car will occupy all available positions
            }
        }
        current_size++;
    }
    else
    {
        cout << "The lot is full"<< endl;
    }
}

//IF THE FUNCTION KEEPS ON FAILING, TRY TO WRITE TESTS. FIRST, SEE FROM YOU PROBLEM WHAT ARE THE DIFFERENT TEST CASES. DO BOUNDARY TEST, UNIT TEST.
void ParkingLot::unparkVehicle(int ID)
{
    //check if there is this ID in the list
    bool have_this_ID=false;
    for (int i=0;i<_max_size;i++) //DO NOT USE CURRENT_SIZE, THE THING THAT ALWAYS CHANGES WHEN PARKING AND UNPARKING, AS AN INDEX OR LIMIT OF THE LOOP
    {
        if(vehicles[i]==NULL) //easier to read, know which one is compiled first
        {
            continue; //continue the for loop, bypassing line 56 to 62
        }
        if(vehicles[i]->getID()==ID) //what if the pointer is null eg. there is no car parked in the spot 
        {
            have_this_ID=true;
            //then also remove this pointer from the list 
            delete vehicles[i]; //delete a single position, not [] the whole array
            current_size--; //do not forget this
            break;
        }
    }

    if(have_this_ID==false)
    {
        cout << "Vehicle not in the lot"<< endl;
    }
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration)
{
    int count=0;//do not forget initialise count=0 if not count++ starts from random number
    for (int i=0;i<current_size;i++)
    {
        if((vehicles[i]->getParkingDuration())>maxParkingDuration)
        {
            count++;
        }
    }
    return count;
}