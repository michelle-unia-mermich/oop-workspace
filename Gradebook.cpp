#include "Gradebook.h"
#include <iostream>
#include <string>
using namespace std;

Gradebook::Gradebook()
{ 
    count=0;
    max_size=10; 
    pGrade= new Grade[max_size];
}


void Gradebook::addGrade(int stud_id, int course_id, string assignment,int value)
{
    //assignment and value are attributes in Grade class,
    //course_id is in the association between Grade and Course
    //student_id is in the association between Student and Grade
    if (count<max_size)
    {
        pGrade[count]=Grade(assignment, value, stud_id,course_id);
        count++;
        cout << "A Grade has been added to the Gradebook."<< endl;
    }
    else
    {
        cout<< "No more space to add a grade to the Gradebook."<< endl;
    }
}