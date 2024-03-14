#include <iostream>

/*
The function should dynamically allocate a new double array of the same size, copy all elements 
from the original array to the new one, and return the pointer to the new array. 
*/

double* duplicateArray(double* array, int size)
{
    double *new_pointer = new double [size];
    for (int i=0;i<size;i++)
    {
        *(new_pointer+i)=*(array+i);
    }
    return new_pointer;
}