#include <iostream>
using namespace std;

int *readNumbers() //Question
{
    int *pointer= new int[10];
    for(int i=0;i<10;i++)
    {
        cin>> *(pointer+i);
        cout<< " ";
    }
    cout<<endl;
    return pointer;
}


void printNumbers(int *numbers,int length)
{
    //takes an int array with pointer numbers
    for(int i=0;i<length;i++)
    {
        cout << i<< " ";
        cout<<*(numbers+i)<< endl;
    }
}