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
    Student * student1_pointer= &student1; //can also do this dynamic array
    uni.get_Course_pointer()[0].addPerson(student1_pointer);

    //4-Add a grade for this student for *some* of the assignments
    //Add Grade to the Gradebook of the university
    uni.get_Gradebook().addGrade(1894969, 1203, "Practical 1", 100); 
    //WHEN I ADD LIKE THIS uni.get_Gradebook() returns the element inside the object Gradebook inside the object umi. 
    //But does making to this returned object also make change to the object in the uni object of University class? Since we not chaningn the address the poitner points to.
    uni.get_Gradebook().addGrade(1894969, 1203, "Practical 2", 50);
    uni.get_Gradebook().addGrade(1894969, 1203, "Workshop 1", 100);

    
    //print out the elements in array of Grade objects in Gradebook contained in University
    for(int i=0;i<3;i++)
    {
        cout << uni.get_Gradebook().get_Grade_inGradebook()[i].get_value() << endl;
        cout << uni.get_Gradebook().get_Grade_inGradebook()[i].get_assignment() << endl;
    }
    //THIS ONE DOES NOT WORK. SEE test.cpp, which works perfectly

    //print out the address of the Gradebook object taken from uni.get_Gradebook();
    //1- the adress of the Gradebook printed out by get_Gradebook()
    Gradebook* pointer1=&(uni.get_Gradebook()); //error: taking the address of a temporary object of type 'Gradebook' [-Waddress-of-temporary]
    //2- the address of Gradebook object taken from the function get_pointerGradebook()
    Gradebook* pointer2=uni.get_pointerGradebook();
    cout<< "Compare the two pointers, pointer 1 "<< pointer1 <<" and pointer 2: "<<pointer2<<endl;


    return 0;
}