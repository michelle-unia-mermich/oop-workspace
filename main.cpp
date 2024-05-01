#include <iostream>
#include <string>
using namespace std;

#include "University.h"
#include "Course.h"
#include "Gradebook.h"
#include "Grade.h"
#include "Person.h"
#include "Student.h"
#include "Instructor.h"

int main()
{
    //1-Create a University
    University uni= University("UoA","Adelaide");

    //2-Add a course to this University
    uni.addCourse(1203, "OOP");

    //3-Add a student to this course of the uni
    Student student1= Student("Michelle",1894969);
    Student * student1_pointer= &student1; //can also do this dynamic array
    uni.get_Course_pointer()[0].addPerson(student1_pointer);

    //4-Add a grade for this student for *some* of the assignments
    //Add Grade to the Gradebook of the university
    uni.Gradeb.addGrade(1894969, 1203, "Practical 1", 100);
    uni.Gradeb.addGrade(1894969, 1203, "Practical 2", 100);
    uni.Gradeb.addGrade(1894969, 1203, "Workshop 1", 100);

    return 0;
}