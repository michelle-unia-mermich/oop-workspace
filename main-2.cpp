#include "time.h"
#include <iostream>
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
using namespace std;
int main()
{
    srand( static_cast<unsigned int>(  time(0)  )  );
    
    Ship shipObject(20,40);
    Mine mineObject(50,60);
    shipObject.move(2,5);
    //! Why does this not work? cout<< "New pos of the ship is: " << shipObject.getPos()<<endl;
    cout<< "New pos of the ship is: XCoordinate: " << std::get<0>(shipObject.getPos())<<" Y Coordinate: "<< std::get<1>(shipObject.getPos())<< endl;
    mineObject.explode();
    cout<< "Type of the mineOBject is : "<< mineObject.getType()<<endl;

    Explosion explosionObject;
    //call apply() using Ship object as a parameter
    explosionObject.apply(shipObject); //?How can a Ship object be put in a  GameEntity& type, thought we have to use pointers
    cout<< "Check if the new position of the ship object is -1,1: "<< std::get<0>(shipObject.getPos())<<" Y Coordinate: "<< std::get<1>(shipObject.getPos())<< endl;
    cout<< "Check if the new type of the ship object is X: "<< shipObject.getType()<<endl;

    return 0;
}