#include <iostream>
using namespace std;

double arrayMax(double* pointer_array, int size)
{
    //accepts a pointer to a double array and its size as arguments, and returns the maximum value in the array
    double temp_max=*pointer_array;
    for(int i=0;i<size;i++)
    {
        if(*(pointer_array+i)>temp_max)
        {
            temp_max=*(pointer_array+i);
        }
    }
    return temp_max;
}

int main()
{
    int size=10;
    double array[10]={1,2,3,4,5,6,7,8,9,18};
    double* pointer_array;
    pointer_array=array;
    cout << "The maximum is "<<arrayMax(pointer_array,size)<<endl;
    return 0;
}