#include <iostream>
using namespace std;
#include "workshop.h"

int main()
{
    double a=2;
    double *q=&a;
    changeValue(q);
    cout << a << endl;

    int size=10;
    double array[10]={1,2,3,4,5,6,7,8,9,10};
    double* pointer_array;
    pointer_array=array;
    printArray(pointer_array,size);
    cout << "The maximum is "<<arrayMax(pointer_array,size)<<endl;

    cout << "print out the function: " << endl;
    int N=10;
    double M=5;
    double* p=dynamicArray(N,M);
    for(int i=0;i<N;i++)
   {
    cout << *(p+i) << endl;
   }
   return 0;

}

