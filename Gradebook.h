#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <string>
using namespace std;
#include "Grade.h"



class Gradebook
{
    private:
    Grade * pGrade;
    //Gradebook contains an array of grades
    //Note that the grades cannot exist without the gradebook
    int count;
    int max_size; //set it maximum to 10 randomly
        
    public:
    Gradebook();
    void addGrade(int stud_id, int course_id, string assignment,int value);

    ~Gradebook()
    {

    };
};

#endif
