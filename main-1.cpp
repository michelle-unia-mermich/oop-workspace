#include "Utils.h"
#include "time.h"
#include <iostream>
//generate some random positions and calculate distances between them.
int main()
{
    srand( static_cast<unsigned int>(  time(0)  )  );
    Utils utilsObject;
    std::tuple<int, int> randomPosition1= utilsObject.generateRandomPos(960, 640);
    std::tuple<int, int> randomPosition2= utilsObject.generateRandomPos(960, 640);
    double distance = utilsObject.calculateDistance(randomPosition1, randomPosition2);
    std::cout<< "The distance is "<< distance <<std::endl;

    //cannot call member function ‘double Utils::calculateDistance(std::tuple<int, int>, std::tuple<int, int>)’ without object
    //double distance = Utils::calculateDistance(pos1, pos2);
    //therefore I add 
    return 0;
}