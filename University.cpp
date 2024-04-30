#include <string>
using namespace std;
#include <iostream>
#include "Course.h"
#include "Gradebook.h"
#include "University.h"

University::University()
{ 
    name="";
    location="";
    max_size=10;
    pCourse = new Course [max_size];
    pGradeb = new Gradebook [1]; //University contains array of Gradebook objects size 1
    //if don't want to set a random number here, have to delete the array and set a new array everytime adding a new object
    /*
    (1) if you use an array here, you have to have a specific number 10 or 20. Cannot leave blank, no length of array specified.
    (2) if want to store data in a 1-D format without the need to specify the length, use vector. #include <vector> or sth like that
    (3) When do we use double-pointer pCourse or single-pointer pCourse? 
        - 1) Must use double-pointer if the association is between Class A and Class B where Class B has child classes. In this example, the association between Person and Course.
        - 2) For the rest of the cases can use single-pointer or double-pointer (for both aggregation and composition). In this association between University and Course, there are 2 cases:
            + Single-pointer: in constructor:  pCourse= new Course [10]. Create an array of 10 Course Objects. Then in addCourse() function, create Course object and paste into each element of the array. No Dynamic Array.
            + If want to create dyanmic Course objects in the  addCourse() function, then have to use pCourse as double pointer declared in the headerfile.
    (4) But for the case of single pointer when we create objects in Stack, I'm afraid that once the member function of the class is called, the objects won't be there?
    Refer to Kate's instance when you create 5 objects in Stack in the constructor but not dynamic, will it still be there?
    But in this case the single pointer is not in Stack but in Heap. they point to the objects that are in Stack. Then when we delete the pointer in Heap, it will delete the objects in Stack too? We are not creating the pointer also in STack anyway.
    But if we create the pointer in Stack and also the objects the pointer points to in Stack, will they be gone after the class is called? gone when we execute in the main function.
    Look again the syntax to create array in Stack and in Heap.
    Will there be member functions that are in private and not in public? Yes, but they can't be access outside the class (eg. in the main function, that is in the main function and outside the class of this member function).
    Sometimes if there are functions we used repetitively in the class but not ouside the class (in main) the function can be put in private.
    */
    count=0;
}

University::University(string _name, string _location)
{ 
    name=_name;
    max_size=10;
    location=_location;
    pCourse = new Course [max_size];
    count=0;
}

void University::addCourse(int id, string name)
{
    if (count <max_size)
    {
        pCourse[count]= Course(name, id); 
        //recall the workshop when we create dynamic array of objects (not dynamic array of pointers after initialising double pointer). the objects are in Stack, the pointer in Heap. when deleting pointer, also deleting the objects the pointer points to in Stack.
        //if want to initiliase dynamic objects, need to have array of objects, so need to intialise a double pointer array.
        count++;
        cout << "A course has been added to University."<< endl;
    }
    else
    {
        cout << "The current size is not smaller than the max size of"<< max_size<<". No course is added to University."<< endl;
    }
        
}

//How to do the composition association between University and Gradebook?
//Cannot write an array of Gradebook objects with size 1 in University and have a function to add Gradebook later because this means that if we do not add the function, University has no Gradebook (contradicts UML)
//Why does the end near University have the black diamond but the end near Gradebook does not have diamond for composition between University and Gradebook?
//What's the difference between this and another 1--------1 association relation like between Student and Grade or Course and Grade

// Now how I interpret this: Gradebook has a composition with University (to 1) but University does not have composition with Gradebook but just normal association with cardinality 1?
//Now from this interpretation the Gradebook gets deleted when University gets deleted, but University does not get deleted when gradebook gets deleted, then that means the university can exist when Gradebook =0, then why does it show 1 on the association?
