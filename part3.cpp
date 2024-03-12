#include <iostream>
using namespace std;

void printArray(double* pointer_array, int size)
{
    //accepts a pointer to an array and its size as arguments, and prints out the content of the array. 
    for(int i=0;i<size;i++)
    {
        cout << *(pointer_array+i) << endl;
    }

}

int main()
{
    int size=10;
    double array[10]={1,2,3,4,5,6,7,8,9,10};
    double* pointer_array;
    pointer_array=array;
    printArray(pointer_array,size);
    return 0;
}