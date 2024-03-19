#include <iostream>
using namespace std;

extern int *readNumbers();

extern void hexDigits(int* pointer);

int main()
{
    
    cout<< "Input the arrays: ";
    int *pointer=readNumbers();
    cout<< "Print out: "<<endl;
    hexDigits(pointer);
    delete[] pointer;
    return 0;
}