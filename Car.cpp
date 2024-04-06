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
    int result=(int)(0.9*((double)(difftime(current_time,timeOfEntry))));
    return result;//in seconds, discount 10% 
}