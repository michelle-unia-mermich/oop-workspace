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

//hexDigits that when passed a pointer pointing to an int array of any length greater than 0 will print 
//the corresponding hex digit for each int, one per line. 

//NOTE THAT: instead of passing an array to a function, you can pass the pointer pointing to that array if the array is dynamically allocated
void hexDigits(int* pointer)
{
    //assume lengtn of the array that ponter points to is 10 in this case
    //assume the numbers of the array are in the range 0 to 15.
    for(int i=0;i<10;i++)
    {
        if (*(pointer+i)>=10)
        {
            char hex_digit=0;
            switch(*(pointer+i)) 
            {
                case 10:
                    hex_digit='A';
                case 11:
                    hex_digit='B';
                case 12:
                    hex_digit='C';
                case 13:
                    hex_digit='D';
                case 14:
                    hex_digit='E';
                case 15:
                    hex_digit='F';
            }
            cout<< i<< " "<<*(pointer+i)<<" "<<hex_digit<<endl;

        }
        else
        {
            cout<< i<< " "<<*(pointer+i)<<" "<<(*(pointer+i))<<endl;
        }
    }
}