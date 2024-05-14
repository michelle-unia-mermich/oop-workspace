#include <iostream>
using namespace std;

class Student
{
    private:
        int id;
    public:
        //everytime a studetn is added, id is automaticaly assigned
        int count=1; //starting from 1
        Student()
        {
            id = count++;
            //id = Student::count++; -> can only do this if count is static
        }
        //Add Student:: just to increase readibility?
        int get_id(){return id;}
};

int main()
{
    Student s1;
    Student s2;
    Student s3;

    cout << s1.get_id()<<endl;
    cout << s2.get_id()<<endl;
    cout << s3.get_id()<<endl;
    //all 3 will print out 1 because cout is not static. cout is a data member belonging to each object. each tine creating a new object, count will be initialised to 1. 

    return 0;
}
