#include <iostream>
using namespace std;

void changeValue(double*p)
{
    //accepts a pointer to a double and changes the value of the double it points at to 42.
    *p=42;
}

void printArray(double* pointer_array, int size)
{
    //accepts a pointer to an array and its size as arguments, and prints out the content of the array. 
    for(int i=0;i<size;i++)
    {
        cout << *(pointer_array+i) << " ";
    }
    cout << endl;
}

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

double* dynamicArray(int const N, double M)
{
    /*
    dynamically allocates a double array of size N, initializes the array with values 
    (for instance, array index or a random number), and returns the pointer to the array.
    */
   double *p = new double[N]; //initialise N spots of dynamic memory for the array
   for(int i=0;i<N;i++)
   {
    *(p+i)=M;
   }
   return p;
}