#include <iostream>
/*
create a function named arrayMin that 
accepts a pointer to an array of doubles
 and its size as arguments, and returns 
 the minimum value in the array. 
*/

double arrayMin(double* array, int size)
{
    double temp=*array;
    for(int i=0;i<size;i++)
    {
        if (*(array+i)<temp)
        {
            temp=*(array+i);
        }
    }
    return temp;
}