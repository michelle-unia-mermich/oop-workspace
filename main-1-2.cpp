#include <iostream>
using namespace std;

extern void modifyArray(double* array, int size, double value);

int main()
{
    int const SIZE=5;
    double array_input[5]={2,3,4,67,5};
    double value=1;
    double*array=array_input;
    modifyArray(array,SIZE,value);
    for(int i=0;i<SIZE;i++)
    {
        cout<< *(array+i)<<" ";
    }
    cout << endl;
    return 0;
}
