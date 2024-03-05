#include <iostream>
using namespace std;

extern long binary_convert(long);

long addition(long num1, long num2){
    long sum = 0b0;
    sum = num1 + num2;
    return binary_convert(sum);
}

long subtraction(long num1, long num2){
    long sum = 0b0;
    sum = num1 - num2;
    return binary_convert(sum);
}

int main(){
    long num1=0b10001;
    long num2=0b110001;

    cout << "Sum is " << addition(num1,num2)<<endl;
    cout << "Subtraction is" << subtraction(num1,num2)<<endl;

    return 0;

}

