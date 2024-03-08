#include <iostream>
#include <string>
#include <math.h>
using namespace std;

extern void print_binary_str(string decimal_str);

int main()
{
    string decimal_str="12345";
    print_binary_str(decimal_str);
    return 0;
}