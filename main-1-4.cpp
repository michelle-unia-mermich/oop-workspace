#include <iostream>
using namespace std;
#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);

extern Person* createPersonArray(int n);

extern PersonList createPersonList(int n);



int main()
{
    PersonList pl;
    int n=5;
    pl=createPersonList(n);
    cout << "Address of the Person array of the first PersonList:"<< shallowCopyPersonList(pl).people << endl; //this is a pointer
    cout<< "Address of the second array of the first PersonList:"<< pl.people<< endl; //pointer of the orginal PersonList
    for(int i=0;i<n;i++)
    {
        //shallowCopyPersonList(pl).people[i] is an object with two attributes, name and age
        cout<< shallowCopyPersonList(pl).people[i].name<< " ";
        cout<< pl.people[i].name<< endl;

    }
    return 0;
}