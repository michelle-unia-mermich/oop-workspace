#include <iostream>
using namespace std;

extern int *readNumbers(int);

extern bool equalsArray(int *,int *,int );

int main()
{
    int length=0;
    cout<< "Insert the length of array you want: ";
    cin >> length;
    cout<< endl;

    cout<< "Input the first array: ";
    int *pointer1=readNumbers(length);
    cout<< "Input the second array: ";
    int *pointer2=readNumbers(length);
    cout<< "Are the two array equal? Answer: "<< (equalsArray(pointer1,pointer2,length)? "true" : "false")<<endl;
    delete[] pointer1;
    delete[] pointer2;
    return 0;
}