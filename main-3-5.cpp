#include <iostream>
using namespace std;

extern double sum_even(double array[], int n);

int main() {
    double array[7] = {1.2,2.5,3,5,3,2,1};
    cout << "The sum of even positions: " << sum_even(array,7) << endl;
    return 0;
}