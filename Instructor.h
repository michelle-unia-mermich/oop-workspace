#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <string>
using namespace std;
#include "Person.h"

class Instructor: public Person
{
    private:

        
    public:
    Instructor();
    Instructor(string input_name);

    ~Instructor()
    {

    };
};

#endif
