#include <iostream>
using namespace std;

extern int is_identity(int array[10][10]);

int main() {
    int array[10][10] = {{1,2,3,4,5,6,7,8,9,10},
                        {11,12,13,14,15,16,17,18,19,20},
                        {21,22,23,24,25,26,27,28,29,30},
                        {31,32,33,34,35,36,37,38,39,40},
                        {41,42,43,44,45,46,47,48,49,50},
                        {1,2,3,4,5,6,7,8,9,10},
                        {11,12,13,14,15,16,17,18,19,20},
                        {21,22,23,24,25,26,27,28,29,30},
                        {31,32,33,34,35,36,37,38,39,40},
                        {41,42,43,44,45,46,47,48,49,50}};
    cout << "if the matrix is an identity matrix or not. 1 if it is an identity matrix and a 0 if not.: " <<is_identity(array) << endl;
    return 0;
}