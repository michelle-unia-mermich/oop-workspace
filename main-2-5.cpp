#include <iostream>
using namespace std;

extern bool is_descending(int array[], int n);

int main() {
    int array[6] = {8,8,7,7,-9,-10};
    string answer = (is_descending(array,6)) ? "true" : "false";
    cout << "The array is descending, true or false: " << answer << endl;
    return 0;
}