#include <iostream>
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
    //calculate the sum of the elements of every possible sub-array and then return the second smallest sum found. 
    //Sub-arrays are contiguous (bordering) ranges of elements within an array
    /*
    For example, if you have an array of length 4, {1,2,3,4}, then the complete set of sub-arrays is:
    {1}, {1,2}, {1,2,3}, {1,2,3,4}, {2}, {2,3}, {2,3,4}, {3}, {3,4}, {4}

    First, we need to figure out how many subarrays are there in total to set the array that stores all the values of sums of all sub-arrays;
    there are n sub-arrays containing the 1st element of the array
    there are n-1 sub-arrays containing the 2nd element of the array
    .
    .
    .
    there are 2 sub-arrays containing the n-1 th element of the array
    there are 1 sub-arrays containing the nth element of the array (itself)

    Thus number of sub_arrays is 1+2+...+n = n*(n+1)/2

    first_element_of_sub_array is *(numbers+feosa)
    */
   int no_subarrays=length*(length+1)/2;
   int* pointer_sum_array=new int [no_subarrays]; //now save the sums into this array
   int count=-1; //eg. the position of the sum in pointer_sum_array
   for(int feosa=0;feosa<length;feosa++)
   {
    for(int j=feosa;j<length;j++) // *(numbers+j) the last element of each sub array
    {
        /*
        Consider the array {1,2,3,4}
        For instance, feosa=0
        the sub_arrays that has *(numbers+feosa) eg. 1 is 

        {1} -> position feosa=0 goes to position j=0
        {1,2}-> position feosa=0 goes to position j=1
        {1,2,3}-> position feosa=0 goes to position j=2
        {1,2,3,4} -> position feosa=0 goes to position j=3
        */

       //now run a loop from feosa to j to list out all the elemtns
       
       //for each j there is a sum
       int sum=0;
       for(int u=feosa; u<=j;u++)
       {
            //consider the case when feosa=0, j=2
            //The goal is to take the sum of {1,2,3} (when position feosa=0 goes to position j=2)
            sum+=*(numbers+u)
       }
       //for every sum increase the count eg. the position of the sum in pointer_sum_array
       count++;
       *(pointer_sum_array+count)=sum;
    }
   }

    //now test what is the second smallest number is pointer_sum_array
    int no_subarrays=length*(length+1)/2;
    int* pointer_sum_array
}
