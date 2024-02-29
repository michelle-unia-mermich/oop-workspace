#include <iostream>

int min_element(int array[], int n){
    int min=0;
    if (n>=1){
        int temporary_min=array[0];
        for ( int i=0 ; i<n ; i++){
            if (array[i]<temporary_min){
                temporary_min=array[i];
            }
        }
        min=temporary_min;

    }
    else{
        min=0;
    }
    return min;
}