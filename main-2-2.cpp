#include <iostream>
using namespace std;

extern int max_element(int array[], int n);

int main() {
    int array[6] = {4,29,6,7,8,15};
    cout << "The maximum element is: " << max_element(array,6) << endl;
    return 0;
}