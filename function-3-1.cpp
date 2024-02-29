#include <iostream>

bool is_fanarray(int array[], int n){
    bool ans= true;
    if (n>=1){
        if (n%2==0){
            for (int i=0; i<(n/2) ; i++){
                if (array[i]!=array[n-1-i]){
                    ans=false;
                }
                if (array[i]>array[i+1]){
                    ans=false;
                }
            }
        }
        else{
            int middle=(int) ((n/2)-0.5);
            for (int i=0; i< middle ; i++){
                if(array[i]!=array[n-1-i]){
                    ans=false;
                }
                if (array[i]>array[i+1]){
                    ans=false;
                }
            }
        }
    }
    else{
        ans=false;
    }
    return ans;
}