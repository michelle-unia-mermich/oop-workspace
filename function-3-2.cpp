#include <iostream>
#include <algorithm>
using namespace std;

/*
3-2. Given an array of integers and its length, 
return the median of the array. The median of a list is 
the middle number of the sorted list. 
E.g. the array {3,5,2,1,4} after sorting becomes {1,2,3,4,5} 
which has a median of 3. 
The function must return 0 if the size parameter, n, 
is even or if it is less than 1.

*/

int median_array(int array[], int n){
    int median=0;
    //sort through and adjusting in ascending order
    std::sort(array, array + n);
    if ((n>=1)&&(n%2!=0)){
        int middle_position= n/2; //int n/2 rounding down to nearest integer
        median=array[middle_position];
    }
    else{
        median=0;
    }
    return median;
}