#include <iostream>

int array_min(int integers[], int length)
{
    int min=0;
    if(length>=1)
    {
        min=integers[0];
        for(int i=0;i<length;i++)
        {
            if(integers[i]<min)
            {
                min=integers[i];
            }
        }
    }
    else
    {
        min=-1;
    }
    return min;
}

int array_max(int integers[], int length)
{
    int max=0;
    if(length>=1)
    {
        max=integers[0];
        for(int i=0;i<length;i++)
        {   
            if(integers[i]>max)
            {
                max=integers[i];
            }
        }
    }
    else
    {
        max=-1;
    }
    return max;
}

int sum_min_max(int integers[], int length)
{
     if(length>=1)
    {
        return (array_min(integers,length)+array_max(integers,length));
    }
    else
    {
        return -1;
    }
}