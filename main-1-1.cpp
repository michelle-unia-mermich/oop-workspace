#include <iostream>
#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
using namespace std;
#include <string>

int main() {
    Vehicle * array;
    cout << "Prompt the user for the numer of vehicle: ";
    int no;
    cin >> no;
    cout<< endl;

    array= new Vehicle[no];
    int count=0;

    for(int i=0;i<no;i++)
    {
        std::cout<< "First, key in the type of vehicle, between Car, Bus and Motorbike: "<< endl;
        string s;
        int newID;
        std::cin >> s;
        std::cout<< " together with its ID: "; ;
        std::cin >> newID;
        std::cout<<endl;
        if(s=="Car")
        {
            Car car1(newID);
            array[count]=car1;
            count++;
        }
        if(s=="Bus")
        {
            Bus Bus1(newID);
            array[count]= Bus1;
            count++;
        }
        if(s=="Motorbike")
        {
            Motorbike Motorbike1(newID);
            array[count]= Motorbike1;
            count++;
        }

        if((s!="Motorbike")&&(s!="Car")&&(s!="Bus"))
        {
            cout<< "The type of vehicle you typed does not exist."<< endl;
        }
    }

    //print out the parking duration for each vehicle in the list
    for(int j=0;j<no;j++)
    {
        cout<< "For vehicle with ID: "<< array[j].getID()<<" the parking duration is: "<< array[j].getParkingDuration()<< endl;
    }

    delete [] array;
    return 0;
}