#include <iostream>

bool is_ascending(int array[], int n){
    bool ans= true;
    if (n>0){
        for (int i=0;i<=(n-2);i++){
            if (array[i]>array[i+1]){
                ans=false;
            }
        }
    }
    else{
        ans=false;
    }
    return ans;
}