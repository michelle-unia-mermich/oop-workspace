#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n){
    int sum=0;
    if (n>=1){
        for (int i=0;i<n;i++){
        sum+=array[i]+secondarray[i];
    }
    }
    else{
        sum=0;
    }
    return sum;  
}