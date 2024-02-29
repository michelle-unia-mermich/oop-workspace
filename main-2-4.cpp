#include <iostream>
using namespace std;

extern bool is_ascending(int array[], int n);

int main() {
    int array[6] = {4,4,5,6,7,6};
    string answer = (is_ascending(array,6)) ? "true" : "false";
    cout << "The array is ascending, true or false: " << answer << endl;
    return 0;
}