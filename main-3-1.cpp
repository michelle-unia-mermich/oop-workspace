#include <iostream>
#include "TV.h"
#include "Appliance.h"
#include "House.h"
#include "Fridge.h"
#include "TV.h"
using namespace std;
#include <string>

int main() {

    House house1= House(2);
;   TV* TV1= new TV(10000,200);
    Fridge* fridge1= new Fridge(400,50);
    house1.addAppliance(TV1);
    house1.addAppliance(fridge1);
    
    return 0;
}