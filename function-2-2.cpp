#include <iostream>
#include <math.h>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits)
{
    //assume that 1<=number_of_digits<=30 and each is either 0 or 1
    /*
    eg. [1,0,1,1] -> 2^0 * 1 + 2^1 *1 + 0 + 2^3 * 1
    */
   int integer_result=0;
   for(int i=0; i<number_of_digits; i++)
   {
        integer_result+=pow(2,(number_of_digits-1-i));
   }
   return integer_result;
}