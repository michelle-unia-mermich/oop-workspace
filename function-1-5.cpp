#include <iostream>

int count_evens(int number){
    int count=0;
    if (number>=1){
        for(int i=1; i<=number; i++){
            if (i%2==0){
                count++;
            }
        }
    }
    else{
        count=0;
    }
    return count;
}