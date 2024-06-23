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
        Gradebook Gradeb;

    public:
        
        
        University(); 
        University(string __name, string _location);
        void addCourse(int id, string name);

        //if we do not return pointer to the Course array here, how can we add a student to the Course in the University? MUST HAVE A GETTER FUNNCTION IF THE VARIABLE IS IN PRIVATE
        Course* get_Course_pointer();

        Gradebook get_Gradebook();
        Gradebook* get_pointerGradebook();

    ~University()
    {
        delete [] pCourse; 
    };
};

#endif
