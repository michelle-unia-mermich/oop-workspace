#include <iostream>
using namespace std;

int count( int array[], int n){
    //Returns the total count of positive and even numbers in the given array
    int total_even=0;
    for (int i = 0; i < n; i++) {
        if (array[i]%2==0) {
            total_even += 1;
        }
    }
    return total_even;
}