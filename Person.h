#ifndef PERSON_H
#define PERSON_H

//using namespace std; why cannot put it here
#include <string>

struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople; //maybe like the identity number of each person?
};



#endif