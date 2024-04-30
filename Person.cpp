#include "Person.h"
#include <iostream>
#include <string>

Person::Person()
{
   name="";
}

Person::Person(string input_name)
{
    name=input_name;
}
//getter and setter functions

string Person::get_name()
{
    return name;
}