#include <iostream>
#include<algorithm>
using namespace std;

int *readNumbers(int length) 
{
    int *pointer= new int[length];
    cout<< "Insert the elements of the first array with length "<<length<<": ";
    for(int i=0;i<length;i++)
    {
        cin>> *(pointer+i);
        cout<< " ";
    }
    cout<<endl;
    return pointer;
}

int secondSmallestSum(int *numbers,int length)
{
   int result=0;
   int no_subarrays=length*(length+1)/2;
   int* pointer_sum_array=new int [no_subarrays];
   int count=-1;
   for(int feosa=0;feosa<length;feosa++)
   {
    for(int j=feosa;j<length;j++)
    {
       int sum=0;
       for(int u=feosa; u<=j;u++)\
       {
            sum+=*(numbers+u);
       }
       count++;
       *(pointer_sum_array+count)=sum;
    }
   }
    //now sort the sum array
    std::sort(pointer_sum_array, pointer_sum_array + no_subarrays);
    //the second smallest number is * (pointer_sum_array+1)
    result=*(pointer_sum_array+1); //stack memory, transient
    
    delete [] pointer_sum_array;
    return result; //escaping any function: local variables cleaned up; while not for dynamically allocated array
}
