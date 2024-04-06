#include <iostream>
#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
using namespace std;
#include <string>

#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

int main() {
    int total;
    int count_car=0;
    int count_bus=0;
    int count_motorbike=0;

    cout << "Enter the total number of cars you want to park: ";
    cin >> total;
    cout<< endl;

    int vehicles_array[total][2];
    
    for(int i=0;i<total;i++)
    {
        std::cout<< "Enter type of vehicle, between Car[1], Bus[2] and Motorbike[3]: "<< endl;
        int type;
        int newID;
        std::cin >> type;
        std::cout<< " together with its ID: "; ;
        std::cin >> newID;
        std::cout<<endl;
        vehicles_array[i][0]=type;
        vehicles_array[i][1]=newID;

        switch (type)
        {
            case 1:
                count_car++;
                break;
            case 2:
                count_bus++;
                break;
            default:
                count_motorbike++;
                break; //must have
        }  
    }

    Car *car_array=new Car[count_car];
    Bus *bus_array=new Bus[count_bus];
    Motorbike *motorbike_array=new Motorbike[count_motorbike];

    int index_car=0;
    int index_bus=0;
    int index_motorbike=0;

    //input information from the array to the dynamic arrays
    for(int i=0; i<total; i++)
    {
        switch(vehicles_array[i][0])
        {
            case 1:{
                Car car_obj(vehicles_array[i][1]);
                car_array[index_car]=car_obj;
                index_car++;
                break;
            }
            case 2:{
                Bus bus_obj(vehicles_array[i][1]);
                bus_array[index_bus]=bus_obj;
                index_bus++;
                break;
            }
            case 3:{
                Motorbike motorbike_obj(vehicles_array[i][1]);
                motorbike_array[index_motorbike]=motorbike_obj;
                index_motorbike++;
                break;
            }
        }
    }

    std::this_thread::sleep_for (std::chrono::seconds(3));

    //print out the parking duration for each vehicle in the list
    for(int j=0;j<count_car;j++)
    {
        cout<< "For vehicle with ID: "<< car_array[j].getID()<<" the parking duration is: "<< car_array[j].getParkingDuration()<< endl;
    }
    for(int j=0;j<count_bus;j++)
    {
        cout<< "For vehicle with ID: "<< bus_array[j].getID()<<" the parking duration is: "<< bus_array[j].getParkingDuration()<< endl;
    }
    for(int j=0;j<count_motorbike;j++)
    {
        cout<< "For vehicle with ID: "<< motorbike_array[j].getID()<<" the parking duration is: "<< motorbike_array[j].getParkingDuration()<< endl;
    }

    delete [] car_array;
    delete [] bus_array;
    delete [] motorbike_array;
    return 0;
}