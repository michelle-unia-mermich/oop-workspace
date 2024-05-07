// EquivalenceTests.h

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
    //The equivalence cases:
    //(positive integers, 
    //negative integers, 
    //mixtures of both, 
    //zeroes, 
    //big positive numbers, 
    //big negative numbers, 
    //and the special cases 1 and -1??? why?
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testPositiveNegative();
        testZero();
        testBigPositiveNumber();
        testBigNegativeNumber();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void testPositiveNegative()
    {
        Addition addition;
        if (addition.add(-4, 5) != 1) {
            std::cout << "Test 2 failed!" << std::endl;
        }
        if (addition.add(-1, 1) != 0) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void  testZero()
    {
        Addition addition;
        if (addition.add(0, 5) != 5) {
            std::cout << "Test 2 failed!" << std::endl;
        }
        if (addition.add(0, -5) != -5) {
            std::cout << "Test 2 failed!" << std::endl;
        }
        if (addition.add(0, 0) != 0) {
        std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void  testBigPositiveNumber()
    {
        //int: cannot go too big int
        Addition addition;
        if (addition.add(1000000, 2000000) != 3000000) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void  testBigNegativeNumber()
    {
        Addition addition;
        if (addition.add(-1000000, -2000000) != -3000000) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }
    
};