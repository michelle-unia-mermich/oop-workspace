#include <iostream>
#include <string>
#include <math.h>
using namespace std;

extern void print_binary_str(string);
//in the extern no need to declare fully the function, eg. no need decimal_str: void print_binary_str(string decimal_str). string is enough

int main()
{
    string decimal_str="12345";
    print_binary_str(decimal_str);
    return 0;
}