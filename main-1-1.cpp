#include <iostream>
using namespace std;

extern int *readNumbers();

extern void printNumbers(int *numbers,int length);

int main()
{
    
    cout<< "The pointer is: ";
    int *pointer=readNumbers();
    cout << pointer <<endl;
    cout<< "Print out the array: "<<endl;
    printNumbers(pointer,10);
    delete[] pointer;
    return 0;

}

