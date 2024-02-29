#include <iostream>
using namespace std;

extern void two_five_nine(int array[], int n);

int main() {
    int array[6] = {2,5,5,2,9,6};
    two_five_nine(array,6);
    return 0;
}