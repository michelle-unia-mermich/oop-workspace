#include <iostream>
using namespace std;

extern int *readNumbers(int);

extern bool equalsArray(int *,int *,int );

extern int *reverseArray(int *numbers1,int length);

int main()
{
    int length=0;
    cout<< "Insert the length of array you want: ";
    cin >> length;
    cout<< endl;

    cout<< "Input the original array: ";
    int *pointer1=readNumbers(length);
    
    cout<< "The reverse array is: ";
    int *pointer2= reverseArray(pointer1,length);
    for(int i=0;i<length;i++)
    {
        cout<<*(pointer2+i)<<" ";
    }
    cout<< endl;

    
    cout<< "Are the two arrays equal? Answer: "<< (equalsArray(pointer1,pointer2,length)? "true" : "false")<<endl;
    delete[] pointer1;
    delete[] pointer2;
    return 0;
}