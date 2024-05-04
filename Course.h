#ifndef COURSE_H
#define COURSE_H
#include <string>
using namespace std;
#include "Person.h"

class Course
{
    private:
    string name;
    int id;
    Person** pPerson;
    int count;
    int max_size;//set this randomly to be 10
    //Course contains an array of pointers to Person objects.
    //Why? These people can still exist without the course. When the course is deleted, the people still exist. 
    //The Course object contains an array of Person*. When the course is deleted, Person** pointer is deleted, then the objects that this pointer points to eg. the Person* objects are also deleted. But the Person objects that the Person* pointer points to in Heap are not deleted.
    //Then in destructor of Course, we will only delete [] pPerson, not set a loop to delete everything delete pPerson[i]
        
    public:
    Course();
    Course(string _name, int _id);
    //string get_name();
    //int get_id();
    void addPerson(Person* p);

    ~Course()
    {
        
    };
};

#endif
