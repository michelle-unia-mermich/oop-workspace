#include <iostream>
using namespace std;

extern int count_evens(int number);

int main() {
    cout << "The number of even numbers from 1 is: " << count_evens(0) << endl;
    return 0;
}