#ifndef UNITTEST_H
#define UNITTEST_H
#include <iostream>
using namespace std;
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        //Inside the testAddition function, we create an instance of the Addition class and test its functionality.
        Addition addition;

        //Input various tests
        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }

        if (addition.add(4, -9) != -5) {
            std::cout << "Test 1 failed!" << std::endl;
        }

        if (addition.add(-10, -9) != -19) {
            std::cout << "Test 1 failed!" << std::endl;
        }
        
        //Do we add in "Test 1 is successful"? Is it a standard or not in unit test?
        
        
    }
};



#endif