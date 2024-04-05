#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
using namespace std;
#include <string>

int main() {
    ParkingLot parkinglot(10);

    Vehicle * array;
    array= new Vehicle[10];
    int count=0;

    for(int i=0;i<10;i++)
    {
        std::cout<< "First, key in the type of vehicle to park int the lot, between Car, Bus and Motorbike: "<< endl;
        string s;
        int newID;
        std::cin >> s;
        std::cout<< " together with an ID";
        std::cin >> newID;
        std::cout<<endl;
        if(s=="Car")
        {
            Car car1(newID);
            array[count]=car1;
            parkinglot.parkVehicle((array+count));
            count++;
        }
        if(s=="Bus")
        {
            Bus Bus1(newID);
            array[count]= Bus1;
            parkinglot.parkVehicle((array+count));
            count++;
        }
        if(s=="Motorbike")
        {
            Motorbike Motorbike1(newID);
            array[count]= Motorbike1;
            parkinglot.parkVehicle((array+count));
            count++;
        }

        if((s!="Motorbike")&&(s!="Car")&&(s!="Bus"))
        {
            cout<< "The type of vehicle you typed does not exist."<< endl;
        }
    }

    int ID_to_unpark;
    cout<< "Key in ID to unpark: ";
    cin>> ID_to_unpark;
    cout<< endl;
    parkinglot.unparkVehicle(ID_to_unpark);

    delete [] array;
    return 0;
}