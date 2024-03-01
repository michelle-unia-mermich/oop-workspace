#include <iostream>
using namespace std;

extern bool is_fanarray(int array[], int n);

int main() {
    int array[8] = {1,2,5,5,5,5,2,1};
    string answer = (is_fanarray(array,8)) ? "true" : "false";
    cout << "The array is a fan, true or false: " << answer << endl;
    return 0;
}