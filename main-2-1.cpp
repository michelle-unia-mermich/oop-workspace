#include <iostream>
using namespace std;

extern int min_element(int array[], int n);

int main() {
    int array[5] = {4,5,6,7,8};
    cout << "The minimum element is: " << min_element(array,5) << endl;
    return 0;
}