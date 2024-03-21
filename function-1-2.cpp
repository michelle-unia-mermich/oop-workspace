#include "Person.h"

Person* createPersonArray(int n)
{
    Person *pointer= new Person[n];
    for(int i=0; i<n; i++)
    {
        pointer[i].name= "Jane Doe";
        pointer[i].age=1;
    }
    return pointer;
}

PersonList createPersonList(int n)
{
    PersonList result;
    result.people= createPersonArray(n);
    result.numPeople=n;
    return result;
}