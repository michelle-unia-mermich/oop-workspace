#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
using namespace std;
#include <string>

#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

int main() {
    ParkingLot parkinglot(3);
    
    Vehicle** vehicle_pointer;
    vehicle_pointer= new Vehicle*[3]; //array containing pointers pointing to Vehicle objects, not array containing Vehicle objects

    vehicle_pointer[1]=new Car(1);
    vehicle_pointer[2]=new Bus(2);
    vehicle_pointer[3]=new Motorbike(3);


    int total=3;
    //park all 3 cars to the parking lot
    
    for(int i=0; i<total; i++)
    {
        parkinglot.parkVehicle(vehicle_pointer[i]);
    }
    

    //unpark
    parkinglot.unparkVehicle(1);

    delete *vehicle_pointer;
    delete vehicle_pointer;
    return 0;

}