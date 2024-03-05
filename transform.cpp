#include <iostream>
using namespace std;
#include <math.h>

/*
Write the code to transform a number from base 10 to base 2. 
How are you storing the base 2 number?
How would you extend this algorithm to make it usable for any transformation?
*/

long binary_convert(int number){
    //The number of elements in an array is always fixed, you cannot change it.
    int length_binary = (int) (1+ log2(number));
    int remainder_digit[length_binary];
    int count=-1;
    
    while (number>0){
        int remainder=number%2;
        count++;
        //store this remainder
        remainder_digit[count]=remainder;
        //the next number to be divided is the quotient
        number= number/2;
    }

    //going backward the array
    long binary_result=0;
    for (int i=(length_binary-1);i>=0; i-=1){
        binary_result+=remainder_digit[i]*pow(10,i);
    }
    return binary_result;
}

int main(){
    int number=59;
    cout << "Binary number is " << binary_convert(number);
    return 0;
}