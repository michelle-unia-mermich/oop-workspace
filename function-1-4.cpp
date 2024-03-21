#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl)
{
    PersonList shallow_copy_pl;
    shallow_copy_pl.numPeople=pl.numPeople;
    shallow_copy_pl.people=pl.people; //pointing to the same address
    return shallow_copy_pl;
}


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