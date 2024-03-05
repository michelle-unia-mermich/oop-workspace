#include <iostream>
using namespace std;
#include <math.h>

long binary_convert(long number){
    //The number of elements in an array is always fixed, you cannot change it.
    int length_binary = (int) (1+ log2(number)); //the formula to find the number of digits the binary represenation has
    // (int) cast always round down to the nearest integer below. even 7.7 will still go to 7
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

long addition(long num1, long num2){
    long sum = 0b0; //you can put sum=0 still work, no need 0b0
    sum = num1 + num2;
    return binary_convert(sum);
}

long subtraction(long num1, long num2){
    long sum = 0b0;
    sum = num1 - num2;
    return binary_convert(sum);
}

long shiftleft(long binary, int no_digits){
    return binary_convert(binary<<no_digits);
}

long shiftright(long binary, int no_digits){
    return binary_convert(binary>>no_digits);
}


int main(){
    
    long num1=0b110001;
    long num2=0b10001;
    int no_digits=2;

    cout << "Sum is " << addition(num1,num2)<<endl;
    cout << "Subtraction is " << subtraction(num1,num2)<<endl;
    cout << "num1 shifted left "<<no_digits<<" is: "<<shiftleft(num1,no_digits)<< endl;
    cout << "num1 shifted right "<<no_digits<<" is: "<<shiftright(num1,no_digits)<< endl;
    return 0;

}

