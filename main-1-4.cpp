#include <iostream>
using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int size=8;
    int array[8] = {49,61,27,81,5,46,5,5};
    int secondarray[8]={1,2,3,4,5,6,7,8};
    cout << "The sum of two arrays is: " << sum_two_arrays(array, secondarray, 8) << endl;
    return 0;
}