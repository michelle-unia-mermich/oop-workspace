#include <iostream>
using namespace std;

extern double* duplicateArray(double* array, int size);

int main()
{
    double array_input[5]={2,3,4,67,5};
    double* new_pointer=duplicateArray(array_input, 5);
    for(int i=0;i<5;i++)
    {
        cout<< *(new_pointer+i)<<" ";
    }
    cout << endl;
    return 0;
}