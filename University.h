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
        Course* pCourse; // A university may have 0..* Course but when we add a Course to University, there's only one University for each Course
        //COMPOSITION: University contains an arary of courses. when uni is deleted, course is deleted as well. That's why we need a single-pointer array, not a double-pointer array here.
        
        //DO WE NEED TO ACCESS THE MEMBER FUNCTION OF COURSE AND GRADEBOOK FROM UNIVERSITY OR JUST EDIT THEM OUTSIDE UNIVERSITY CLASS IN MAIN?
        // DO WE PUT COURSE AND GRADEBOOK IN PRIVATE OR PUBLIC TO ACCESS THE FUNCTIONS?
        
        //Gradebook Gradeb;// when University object is created, this object contains a Gradebook. For one university, there's one gradebook. For one gradebook, there's one University. When University is deleted, the Gradebook is also gone.
        //Cannot do an array for Gradebook or have a addGradebook function because a University cannot have 0 Gradebook (when not adding any Gradebook) or more than 1 Gradebook (add to array)

    public:
        University(); 
        University(string __name, string _location);
        void addCourse(int id, string name);

        //if we do not return pointer to the Course array here, how can we add a student to the Course in the University?
        Course* get_Course_pointer();

        //if we don't put here public how can we add a Grade to the Gradebook of the university?
        Gradebook Gradeb;


    ~University()
    {
        delete [] pCourse; 
    };
};

#endif
