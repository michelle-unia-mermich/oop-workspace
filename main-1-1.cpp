#include <iostream>
using namespace std;

extern int array_sum(int array[], int n);

int main() {
    int array[5] = {4,5,6,7,8};
    cout << "The sum of array is: " << array_sum(array, 5) << endl;
    return 0;
}