#include <iostream>

double weighted_average(int array[], int n){
    double ans=0;
    for(int i=0; i<n ; i++){
        int count=0;
        for(int j=0; j<n ; j++){
            if (array[i]==array[j]){
                count++;
            }
        }
        ans+= (double) (array[i])*((double)(count))/ ((double) n); //remember to cast when havingn an integer dividing an integer
    }
    return ans;
}