#include "Person.h"
#include "Student.h"
#include <iostream>
using namespace std;

Student::Student():Person()
{ 
    id=0;
}

Student::Student(string input_name, int input_id):Person(input_name)
{
    id=input_id;
}

int Student::get_id()
{
    return id;
}