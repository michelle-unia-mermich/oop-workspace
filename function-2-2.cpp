#include <iostream>

int max_element(int array[], int n){
    int max=0;
    if (n>=1){
        int temporary_max=array[0];
        for ( int i=0 ; i<n ; i++){
            if (array[i]>temporary_max){
                temporary_max=array[i];
            }
        }
        max=temporary_max;

    }
    else{
        max=0;
    }
    return max;
}