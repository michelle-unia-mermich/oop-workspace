/*
#include <iostream>
using namespace std;
#include <string>
*/

#include "Person.h"

Person* createPersonArray(int n)
{
    Person *pointer= new Person[n];
    //is there anyway to do local variables array or can just do dynamic array?
    for(int i=0; i<n; i++)
    {
        pointer[i].name= "John Doe";
        pointer[i].age=0;
    }
    return pointer;
}