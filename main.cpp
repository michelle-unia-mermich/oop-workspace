#include "University.h"
#include "Course.h"
#include "Gradebook.h"
#include "Grade.h"
#include "Person.h"
#include "Student.h"
#include "Instructor.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //1-Create a University
    University uni= University("UoA","Adelaide");

    //2-Add a course to this University
    uni.addCourse(1203, "OOP");

    //3-Add a student to this course of the uni
    Student student1= Student("Michelle",1894969);

    //4-Add a grade for this student for *some* of the assignments
    //Add Grade to the Gradebook of the university
    uni.get_Gradebook().addGrade(1894969, 1203, "Practical 1", 100); 
    cout<<uni.get_Gradebook().get_count()<<endl;
    //WHEN I ADD LIKE THIS uni.get_Gradebook() returns the element inside the object Gradebook inside the object umi. 
    //But does making to this returned object also make change to the object in the uni object of University class? Since we not chaningn the address the poitner points to.
    uni.get_Gradebook().addGrade(1894969, 1203, "Practical 2", 50);
    cout<<uni.get_Gradebook().get_count()<<endl;
    uni.get_Gradebook().addGrade(1894969, 1203, "Workshop 1", 100);
    cout<<uni.get_Gradebook().get_count()<<endl;

    
    //print out the elements in array of Grade objects in Gradebook contained in University
    for(int i=0;i<3;i++)
    {
        cout << uni.get_Gradebook().get_Grade_inGradebook()[i].get_value() << endl;
        cout << uni.get_Gradebook().get_Grade_inGradebook()[i].get_assignment() << endl;
    }
    //THIS ONE DOES NOT WORK. SEE test.cpp, which works perfectl


    return 0;
}