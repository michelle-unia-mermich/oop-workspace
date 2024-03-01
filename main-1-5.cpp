#include <iostream>
using namespace std;

extern int count_evens_from_1(int number);

int main() {
    cout << "The number of even numbers from 1 is: " << count_evens_from_1(4) << endl;
    return 0;
}