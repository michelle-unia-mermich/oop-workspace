#include <iostream>
#include <string>
using namespace std;
#include "Person.h"
#include "Course.h"

Course::Course()
{
    count=0;
    max_size=10;
    name="";
    id=0;
    pPerson=new Person*[max_size];
}

Course::Course(string _name, int _id)
{
    name=_name;
    id=_id;
    count=0;
    max_size=10;
    pPerson=new Person*[max_size];
}

void Course::addPerson(Person* p)
{
    if (count<max_size)
    {
        pPerson[count]= p; //both sides are Person* types
        count++;
        cout<< "A person has been added to the course."<< endl;
    }
    else
    {
        cout<< "Cannot add Person to course because maximum size of "<< max_size<<" is reached. "<<endl;
    }
}
