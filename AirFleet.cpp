#include "AirFleet.h"
#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"
#include <iostream>
using namespace std;
#include <string>

AirFleet::AirFleet()
{
    //AirVehicle **fleet
    fleet = new AirVehicle*[5];
    Airplane* vehicle1= new Airplane(20,10);
    Helicopter* vehicle2= new Helicopter(10000, "BlackHawk");
    AirVehicle * vehicle3=new AirVehicle(5000);
    Helicopter* vehicle4= new Helicopter(100, "WhiteHawk");
    Airplane* vehicle5= new Airplane(15,20);
    fleet[0]=vehicle1;
    fleet[1]=vehicle2;
    fleet[2]=vehicle3;
    fleet[3]=vehicle4;
    fleet[4]=vehicle5;
}

 AirVehicle** AirFleet::get_fleet()
 {
    return fleet;
 }