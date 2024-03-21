#include <iostream>
using namespace std;
//#include <string> //why cannot i include this here and delete in person.h
#include "Person.h" //why must we include when the function-1-1.cpp already includes the header file

extern Person* createPersonArray(int n);

int main()
{
    int n=10;
    Person* new_pointer= createPersonArray(n);
    for(int i=0;i<n;i++)
    {
        cout << new_pointer[i].name << " ";
    }
    cout << endl;
    delete [] new_pointer;
    return 0;
}