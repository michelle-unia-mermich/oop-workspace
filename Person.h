#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
    protected:
        string name;

    public:
        Person();
        Person(string input_name); 
        string get_name();

    ~Person()
    {

    };
};

#endif
