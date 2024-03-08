#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main()
{
    int number_of_digits=7;
    int binary_digits[7]={1,1,0,1,0,0,1};
    cout << "Integer is " << binary_to_int(binary_digits,number_of_digits)<< endl;
    return 0;
}