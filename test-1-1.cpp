#include <iostream>
using namespace std;
#include <string>

#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"

#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

int main()
{
    Vehicle *pointer;
    Car car1(450);
    pointer=&car1;
    std::this_thread::sleep_for (std::chrono::seconds(3));
    double result=pointer->getParkingDuration();
    double expected_result=0.9*((double)3);
    string success = (result==expected_result) ? "successful.":"unsuccessful.";
    cout<< "The result is "<< result<<" and the expected result is "<<expected_result<<"."<<endl;
    cout<<"The test case is "<< success;
    return 0;
}