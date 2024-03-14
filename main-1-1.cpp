#include <iostream>
using namespace std;

extern double arrayMin(double* array, int size);


int main()
{
    int const SIZE=5;
    double array_input[5]={2,3,4,67,5};
    double*array=array_input;
    cout<< arrayMin(array, SIZE)<<endl;;
    return 0;
}