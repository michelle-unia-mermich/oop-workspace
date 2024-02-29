#include <iostream>
using namespace std;

extern double array_mean(int[], int);

extern int array_sum(int[], int);

int main() {
    int array[5] = {4,5,20,7,8};
    cout << "The sum of array is: " << array_sum(array, 5) << endl;
    cout << "The mean of array is: " << array_mean(array, 5) << endl;
    return 0;
}