#include "time.h"
#include <iostream>
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
using namespace std;
int main()
{
    srand( static_cast<unsigned int>(  time(0)  )  );
    
    //*1-Test the move function of the Ship object (actually should have unit test)
    Ship shipObject(20,40);
    shipObject.move(2,5);
    //! Why does this not work? cout<< "New pos of the ship is: " << shipObject.getPos()<<endl;
    cout<< "New pos of the ship is: XCoordinate: " << std::get<0>(shipObject.getPos())<<" Y Coordinate: "<< std::get<1>(shipObject.getPos())<< endl;
    
    //*2-Test the explode() function of Mine object
    Mine mineObject(50,60);
    mineObject.explode();
    cout<< "Type of the mineOBject is : "<< mineObject.getType()<<endl;

    //*3-Test the function of apply() in the Explosion object
    Explosion explosionObject;
    //call apply() using Ship object as a parameter
    explosionObject.apply(shipObject); //?How can a Ship object be put in a  GameEntity& type, thought we have to use pointers
    cout<< "Check if the new position of the ship object is -1,1: X-coordiante is "<< std::get<0>(shipObject.getPos())<<" Y Coordinate is "<< std::get<1>(shipObject.getPos())<< endl;
    cout<< "Check if the new type of the ship object is X: "<< shipObject.getType()<<endl;

    return 0;
}