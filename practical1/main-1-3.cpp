#include <iostream>
using namespace std;

extern int num_count(int array[], int n, int number);

int main() {
    int array[8] = {49,61,27,81,5,46,5,5};
    int number_to_be_equal=5;
    cout << "The sum of array is: " << num_count(array, 8,number_to_be_equal) << endl;
    return 0;
}