#include "Person.h"
/*
struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople; //maybe like the identity number of each person?
};
*/

/*
PersonList deepCopyPersonList(PersonList pl)
{
    //return a new deep copy, that is, the people field of the new PersonList struct should point to a new array of n Person structs, each with the same name and age fields as the original.
    PersonList deep_copy_pl;
    // deep_copy_pl.people this is a pointer pointing to a Person object
    int n=pl.numPeople;
    for (int i=0;i<n;i++)
    {
        deep_copy_pl.people[i].name=pl.people[i].name; //when we write like this then the two pointer are the same?
        deep_copy_pl.people[i].age=pl.people[i].age;
    }
    return deep_copy_pl;
}
*/

/*
PersonList deepCopyPersonList(PersonList pl)
{
    //return a new deep copy, that is, the people field of the new PersonList struct should point to a new array of n Person structs, each with the same name and age fields as the original.
    PersonList deep_copy_pl;
    // deep_copy_pl.people this is a pointer pointing to a Person object
    int n=pl.numPeople;
    for (int i=0;i<n;i++)
    {
        std::string temp_name=pl.people[i].name;
        deep_copy_pl.people[i].name=temp_name; //when we write like this then the two pointer are the same?
        int temp_age=pl.people[i].age;
        deep_copy_pl.people[i].age=temp_age;
    }
    return deep_copy_pl;
}
*/

PersonList deepCopyPersonList(PersonList pl)
{
    PersonList deep_copy_pl;
    int n=pl.numPeople;
    deep_copy_pl.people=new Person[n];
    for (int i=0;i<n;i++)
    {
        std::string temp_name=pl.people[i].name;
        deep_copy_pl.people[i].name=temp_name; //when we write like this then the two pointer are the same?
        int temp_age=pl.people[i].age;
        deep_copy_pl.people[i].age=temp_age;
    }
    return deep_copy_pl;
}



Person* createPersonArray(int n)
{
    Person *pointer= new Person[n];
    for(int i=0; i<n; i++)
    {
        pointer[i].name= "Jane Doe";
        pointer[i].age=1;
    }
    return pointer;
}

PersonList createPersonList(int n)
{
    PersonList result;
    result.people= createPersonArray(n);
    result.numPeople=n;
    return result;
}