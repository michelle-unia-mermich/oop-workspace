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
    double distance2 = Utils::calculateDistance(randomPosition1, randomPosition2); //calling without objects since this is static function
    std::cout<< "The distance is "<< distance2 <<std::endl;

    //always make sure task 1 gets full marks before going to task 2
    return 0;
}