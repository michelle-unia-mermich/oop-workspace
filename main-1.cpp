#include "Utils.h"
#include <iostream>
//generate some random positions and calculate distances between them.
int main()
{
    Utils utilsObject;
    std::tuple<int, int> randomPosition1= utilsObject.generateRandomPos(960, 640);
    std::tuple<int, int> randomPosition2= utilsObject.generateRandomPos(960, 640);
    std::cout<< "The distance is "<< utilsObject.calculateDistance(randomPosition1, randomPosition2)<<std::endl;

    return 0;
}