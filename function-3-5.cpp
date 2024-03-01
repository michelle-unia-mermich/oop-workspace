#include <iostream>

double sum_even(double array[], int n){
    double ans=0;
    if(n>=1){
        for (int i=0 ; i<n ; i++){
            if (i%2==0){
                ans+=array[i];
            }
        }
    }
    else{
        ans=0;
    }
    return ans; 
}