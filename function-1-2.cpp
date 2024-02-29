#include <iostream>
using namespace std;

double array_mean (int array[], int n){
    int sum =0;
    double mean=0;
    if (n>=1){
        for (int i=0;i<n;i++){
            sum+=array[i];
        }
    }
    else{
        mean=0.0;
    }
    mean= ((double)sum)/ ((double)n);
    return mean;
}

int array_sum (int array[], int n){
    int sum =0;
    double mean=0;
    if (n>=1){
        for (int i=0;i<n;i++){
            sum+=array[i];
        }
    }
    else{
        mean=0.0;
    }
    mean=sum/n;
    return sum;
}