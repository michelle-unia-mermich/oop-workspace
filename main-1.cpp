#include "Spot.h"
#include "Influence.h"
#include "Assists.h"

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    Spot spot1 = Spot(1,0,'S');
    Spot spot2 = Spot(1,5,'S');

    cout<< "The category of spot1 is: " << spot1.getCategory() << endl;
    cout<< "The location of spot1 is: " 
    << "("<<std::get<0>(spot1.getLoc()) <<","<<std::get<1>(spot1.getLoc())<<")"<< endl;

    cout<< "The location of spot2 is: " 
    << "("<<std::get<0>(spot2.getLoc()) <<","<<std::get<1>(spot2.getLoc())<<")"<< endl;

    double distance = Assists::evaluateDistance(spot1.getLoc(),spot2.getLoc());
    cout<< " Distance between the two points are: "<< distance << endl;

    spot1.setCategory('A');
    cout<< "The new category of spot1 is: "<< spot1.getCategory() << endl;
    spot1.setLoc(6,7);
    cout<< "The new location of spot1 is: " 
    << "("<<std::get<0>(spot1.getLoc()) <<","<<std::get<1>(spot1.getLoc())<<")"<< endl;



    return 0;
}