#include <iostream>
using namespace std;

//extern bool is_palindrome(int integers[], int length); 

//extern int sum_array_elements(int integers[], int length);

extern int sum_if_palindrome(int integers[], int length);

int main()
{
    int integers[4]={1,2,3,1};
    int length=4;
    cout << "Sum if palindrome is "<< sum_if_palindrome(integers, length)<<endl;
    return 0;
}