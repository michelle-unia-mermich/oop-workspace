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
    std::cout<< "The distance is "<< utilsObject.calculateDistance(randomPosition1, randomPosition2)<<std::endl;

    return 0;
}