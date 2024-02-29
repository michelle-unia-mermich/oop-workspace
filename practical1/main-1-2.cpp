#include <iostream>
using namespace std;

extern double array_mean(int[], int);


int main() {
    int array[5] = {4,5,20,7,8};
    cout << "The mean of array is: " << array_mean(array, 5) << endl;
    return 0;
}