#include <iostream>
using namespace std;

extern double weighted_average(int array[], int n);

int main() {
    int array[7] = {1,2,3,5,3,2,1};
    cout << "The weighted average is: " << weighted_average(array, 7) << endl;
    return 0;
}