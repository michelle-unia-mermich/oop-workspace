#include "AirVehicle.h"
#include <iostream>

AirVehicle::AirVehicle()
{
    weight=0;
    fuel=100; //fuel percentage, initially 100%
    numberOfFlights=0; //initially 0
}

AirVehicle::AirVehicle(int w)
{
    weight=w;
    fuel=100; //fuel percentage, initially 100%
    numberOfFlights=0; //initially 0
}
//getter and setter functions

int AirVehicle::get_weight()
{
    return weight;
}

float AirVehicle::get_fuel()
{
    return fuel;
}

int AirVehicle::get_numberOfFlights()
{
    return numberOfFlights;
}

void AirVehicle::set_weight(int new_weight)
{
    weight=new_weight;
}

void AirVehicle::set_fuel(float new_fuel)
{
    fuel=new_fuel;
}

void AirVehicle::set_numberOfFlights(int new_numberOfFlights)
{
    numberOfFlights=new_numberOfFlights;
}

//real functions
void AirVehicle::refuel()
{
    fuel=100; //reset fuel back to 100
}

void AirVehicle::fly(int headwind, int minutes)
{
    //every time it is called, increase the numberOfFlights by 1
    numberOfFlights++;
}

