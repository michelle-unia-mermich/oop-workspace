#include "Spot.h"
#include "Influence.h"
#include "Assists.h"

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    //randomise time
    srand( static_cast<unsigned int>(  time(0)  )  );

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

    //test the randomise function of Assists
    int matrixWidth=5;
    int matrixHeight=10;
    cout<< "The new locations of the 10 new randomise spots are: "<< endl;
    for (int i=0; i<10; i++)
    {
        std:tuple<int,int> randomLoc = Assists::createRandomLoc(matrixWidth,matrixHeight);
        cout << "("<<std::get<0>(randomLoc) <<","<<std::get<1>(randomLoc)<<")"<< endl;
    }

    return 0;
}