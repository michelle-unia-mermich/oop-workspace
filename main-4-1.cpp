#include <iostream>
using namespace std;

extern int *readNumbers(int);

extern int secondSmallestSum(int *,int );

int main()
{
    int length=0;
    cout<< "Insert the length of array you want: ";
    cin >> length;
    cout<< endl;

    cout<< "Input the original array: ";
    int *pointer1=readNumbers(length);

    cout<< "The second smallest sum is: "<< secondSmallestSum(pointer1,length)<<endl;

    delete[] pointer1;
    return 0;
}