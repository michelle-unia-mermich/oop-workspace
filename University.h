#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <string>
using namespace std;
#include "Course.h"
#include "Gradebook.h"

class University
{
    private:
        string name;
        string location;
        int count;
        int max_size;
        Course* pCourse;
        //COMPOSITION: University contains an arary of courses. when uni is deleted, course is deleted as well. That's why we need a single-pointer array, not a double-pointer array here.
        Gradebook* pGradeb;

    public:
        University(); 
        University(string __name, string _location);
        void addCourse(int id, string name);


    ~University()
    {
        delete [] pCourse; 
    };
};

#endif
