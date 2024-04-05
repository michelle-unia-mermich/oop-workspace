#include "Car.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;

Car::Car():Vehicle(){}

Car::Car(int ID):Vehicle(ID){}

double Car::getParkingDuration()
{
    time_t current_time; //when calling out the function
    current_time=time(0);
    return (0.9*((double)(difftime(current_time,timeOfEntry))));//in seconds, discount 10% 
}