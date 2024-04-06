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
    ParkingLot parkinglot(10);

    int total=10;
    cout << "The parking lot has 10 spots.";
    //cin >> total;
    cout<< endl;
    
    Vehicle** vehicle_pointer;
    vehicle_pointer=new Vehicle*[total]; //array containing pointers pointing to Vehicle objects, not array containing Vehicle objects
    
    for(int i=0;i<total;i++)
    {
        std::cout<< "Enter type of vehicle, between Car[1], Bus[2] and Motorbike[3]: "<< endl;
        int type;
        int newID;
        std::cin >> type;
        std::cout<< " together with its ID: "; ;
        std::cin >> newID;
        std::cout<<endl;

        switch (type)
        {
            case 1:
                vehicle_pointer[i]=new Car(newID);
                break;
            case 2:
                vehicle_pointer[i]=new Bus(newID);
                break;
            case 3:
                vehicle_pointer[i]=new Motorbike(newID);
                break; //must have
            default:
                cout << "You did not type 1,2 or 3."<< endl;
                return 0; //exit
        }  
    }

    //park all 10 cars to the parking lot
    for(int i=0; i<total; i++)
    {
        parkinglot.parkVehicle(vehicle_pointer[i]);
    }

    //let the vehicles park there for a specific amount of time
    std::this_thread::sleep_for (std::chrono::seconds(1));

    //print out the parking duration for each vehicle in the list
    for(int j=0;j<total;j++)
    {
       cout<< "ID of the vehicle is "<< vehicle_pointer[j]->getID()<<" with parking duration "<<vehicle_pointer[j]->getParkingDuration()<<endl;
    }

    //unpark
    int ID_to_unpark;
    cout<< "Key in ID to unpark: ";
    cin>> ID_to_unpark;
    cout<< endl;

    cout<<"Attempt to unpark vehicle with ID 5: "<<endl;
    parkinglot.unparkVehicle(5);
    cout<< "now the 5th position is empty. attempt to unpark vehicle with ID 11."<<endl;
    parkinglot.unparkVehicle(11);
    cout<<" attempt to add another vehicle with ID 5."<<endl;
    Vehicle * p;
    Bus bus1(19);
    p=&bus1;
    parkinglot.parkVehicle(p);

    delete *vehicle_pointer;
    delete vehicle_pointer;
    return 0;

}