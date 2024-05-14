//How to fix the problen in non_static_lecture.cpp
#include <iostream>
using namespace std;

class Student
{
    private:
        int id;
        static int count;
        //cannot do static int count=1; here -> have to initialise/define static data member in cpp or below
    public:
        Student()
        {
            id = Student::count++; 
            //id = count++; STILL WORKS, adding Student:: is for readability
            //id = Student::count++; -> can only do this if count is static
            //but why without Student:: here it still works?
        }
        //Add Student:: just to increase readibility?
        int get_id(){return id;}

        //getter for count
        static int get_count()
        {
            //this static function belongs to class, not the object
            //static function does not have access to non-static data member eg. id but only static data member eg. count
            return count;

        }
};

int Student::count=1;

int main()
{
    cout << Student::get_count()<< endl;
    //even without any objects created, cout still exists. static members belong to class and not objects.

    Student s1;
    Student s2;
    Student s3;

    cout << s1.get_id()<<endl;
    cout << s2.get_id()<<endl;
    cout << s3.get_id()<<endl;
    //all 3 will print out 1 because cout is not static. cout is a data member belonging to each object. each tine creating a new object, count will be initialised to 1. 

    //-------PART 2: DO AN ARRAY OF STUDENT-----
    Student s[100];
    for(int i=0; i<100; i++)
    {
        cout << s[i].get_id()<<endl;
    }
    return 0;
}
