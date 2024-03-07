#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main() {
    int array[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};
    cout << "The sum of the elements along the main diagonal (top left bottom right): " << sum_diagonal(array) << endl;
    return 0;
}