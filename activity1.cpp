#include <iostream>
using namespace std;

// Sums together all positive numbers and returns them
int sum_positive(int array[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > 0) {
            total += array[i];
        }
    }

    return total;
}

int main() {
    int test_array[5] = {5,3,4,-1,8};
    cout << sum_positive(test_array, 5) << endl;
    return 0;
}