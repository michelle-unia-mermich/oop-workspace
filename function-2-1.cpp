#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void print_binary_str(string decimal_str)
{
    int number=stoi(decimal_str);//convert string to integer
    
    int length_binary = (int) (1+ log2(number)); //the formula to find the number of digits the binary represenation has

    int remainder_digit[length_binary];
    int count=-1;
    while (number>0){
        int remainder=number%2; //remainder
        count++;
        remainder_digit[count]=remainder;
        number= number/2;//quotient
    }

    //going backward the array
    long binary_result=0;
    for (int i=(length_binary-1);i>=0; i-=1){
        binary_result+=remainder_digit[i]*pow(10,i);
    }
    cout<<binary_result<<endl;
}