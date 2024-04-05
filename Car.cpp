#include "Car.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;

Car::Car():Vehicle(){}

Car::Car(int ID):Vehicle(ID){}

int Car::getParkingDuration()
{
    time_t current_time; //when calling out the function
    current_time=time(0);
    return ((90/100)*difftime(current_time,timeOfEntry));//in seconds, discount 10% 
}