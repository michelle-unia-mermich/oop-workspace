#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
#include "Person.h"

class Student: public Person
{
    private:
    int id;
        
    public:
    Student();
    Student(string input_name, int input_id);
    int get_id();

    ~Student()
    {

    };
};

#endif
