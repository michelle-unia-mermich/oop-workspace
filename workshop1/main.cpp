#include <iostream>
using namespace std;

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
    int array[5] = {4,5,6,7,8};
    cout << "The number is: " << count(array, 5) << endl;
    return 0;
    //Add some extra test cases to your main function, to make sure your code works.
}
