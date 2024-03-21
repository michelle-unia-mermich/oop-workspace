#include <iostream>
using namespace std;
#include "Person.h"

extern PersonList createPersonList(int n);

extern Person* createPersonArray(int n);

int main()
{
    int n=10;
    PersonList new_person_list=createPersonList(n);
    //new_person_list.people; //this has type Person*
    //new_person_list.people[0]; //this has type Person;
    for (int i=0;i<n;i++)
    {
        cout<< new_person_list.people[i].age<<" ";
        cout<< new_person_list.people[i].name<< endl;
    }

    //understand ? have we deleted all in dynamic array?
    delete[] new_person_list.people;
    return 0;
}