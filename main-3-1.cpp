#include <iostream>
using namespace std;

extern bool is_fanarray(int array[], int n);

int main() {
    int array[7] = {1,2,3,3,3,2,1};
    string answer = (is_fanarray(array,7)) ? "true" : "false";
    cout << "The array is a fan, true or false: " << answer << endl;
    return 0;
}