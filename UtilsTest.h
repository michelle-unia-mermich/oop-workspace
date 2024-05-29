#include <iostream>
#include "Utils.h"
using namespace std;

class UtilsTest 
{
public:
    void runTests() {
        //run test functions here, each test function tests one member function of the class
        testCalculateDistance();
    }

private:
    void testCalculateDistance() 
    {
        {
            std::tuple<int, int> pos1 = std::tuple<int, int>(1,0);
            std::tuple<int, int> pos2 = std::tuple<int, int>(1,2);
            Utils utils;
            cout<< "UtilsTest: The distance is: "<<utils.calculateDistance(pos1,pos2)<<endl;
        }
    }
};

