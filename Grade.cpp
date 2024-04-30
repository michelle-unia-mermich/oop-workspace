#include "Grade.h"
#include <iostream>
#include <string>
using namespace std;

Grade::Grade()
{ 
    assignment="";
    value=0;
    student_id=0;
    course_id=0; 
}

Grade::Grade(string _assignment, int _value, int _student_id, int _course_id)
{
    assignment=_assignment;
    value=_value;
    student_id=_student_id; 
    course_id=_course_id; 
}

int Grade::get_value()
{
    return value;
}

string Grade::get_assignment()
{
    return assignment;
}