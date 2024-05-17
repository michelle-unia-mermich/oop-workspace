//TOPIC: static members in OOP
#ifndef USBConnection_H
#define USBConnection_H
#include <stack>
using namespace std;


class USBConnection 
{
    private:
        static stack<int> ids; //this is the stack<int> object. It is static because each USBconnection object will have the same static object ids
        static int static_testing;
        int id; //id of each object
        USBConnection(); 
        //When do we put constructor in private? We need to have a function in public to call out the instructor, and in this function, we can set conditions whether the constructor can be called or not. We do not allow users to use constructor and create the objects anytine.
        /*
        ?Can static data members be used in a constructor?
        Static members are shared between all objects. If you initialize static data members inside the constructor, then every time a new object is created the static member will get reverted, which is not what we want. 
        */
    public:
        static USBConnection* CreateUsbConnection() //Note that pointer of stack<int> is just int* [but not used in this question]
        {  
            if ((ids.empty()!=true)&&(ids.size()<=3)) //eg. asking is the size differrent from 0, can only add if the port is not empty. just check ids.size()<3 to make sure it's safe.
            {
                //only create the object if there is still space in the port
                USBConnection* new_object= new USBConnection();
                //return the pointer to the new USBconnection object
                return new_object;

                //now we have to remove a number out from the port since we add a new object. we assign the id of this new object as the number we have popped out from the port
                
                //The standard library containers separate top() and pop(): top() returns a reference to the top element, and pop() removes the top element.
                new_object->set_id(ids.top()); //can use set_id() here, a non-static function in this static function CreateUSBConnevtion becasue this set_id() is of the object new_object, not of "this" of this non-static function
                //?I am right to say that static functions have access to static data members but not non-static data members or non-static member functions. Static functions do not have access to static data members and static member functions either because they belong to 'this' - the object, that is not passed to static member function.
                //!But if so then do non-static functions have access to static data members and static member functions? Ans: Non-static member functions can access all data members of the class: static and non-static. Static member functions can only operate on the static data members.
                //? For example, Can this static function use non-static data member eg.id as well? NO (resolved)
                //? this->id=ids.top();
                //? If you run this line, error is "this is only used for non-static function". when you write id=ids.top(). this-> is implicitly used. it's the same as this->id=ids.top().
                //? Basically everytim you use a non-static data member or non-static function, an object this-> is implicitly passed
                //? static function does not belong to any object, so ofc cannot use this->

                //? Can this static function use non-satic function? No, cannot
                //?int a=this->get_id(); //error: "this" can only be used in a non-static member function
                
                //now we can remove a number out from the port since we have a new object here
                ids.pop();   
            }
            else{
                //return a pointer to an object if a port is available; otherwise, it should return nullptr.
                return nullptr;
            }
            
        };

        int get_id()
        {
            return id;
        }

        int get_static_testing()
        {
            return static_testing; //!non-static functions can use static variable, that means we can print out the static var like this? See the lecture videos again
        }

        void set_id(int new_id)
        {
            this->id=new_id;
        }

        bool check_if_port_empty() //if this function works, it proves non-static functions have access to both static and non-static data members
        {
            //this->CreateUsbConnection(); //this lines does not raise any error. it proves non-static functions have access to both static and non-static member functions.
            return ids.empty();
        }
    
    ~USBConnection() //!ASK ABOUT ENCAPSULATION OF DESTRUCTOR: destructor like this is defaul publlic member even though it does not fall under the public domain right? or must be put the destructor under Public domain?
    {
        // When an object is desetroyed, return its used ID to the stack.
        ids.push(id); 
        //?Note: constructor is special type of method of class,it is neither static nor non-static. Same as destructor.
        //?Do constructors and destructors have access to static data members? Ans: both have access to static data member, but usually you would not put static data member to constructor. Can use static data member in destructor as can see here, ids.
        

        /*
        !Do we have to destroy the dynamic object created in CreateUSBConnection()? but that dynamic object is not a data member but a variable in the function?
        To understand whether we should delete dynamically allocated objects in destructor, look back at the code and think in sequence.
        First, when CreateUsbConnection() is called, it will check the condition on line 22. If the condition is not passed, the function just returns nullptr and no object of USBConnection is created.
        If the condition is met, a new object of USB Connection is created and the *pointer* that points to this dynamic USBConnection object is returned as the return of the function.
        eg. in main()
        
        *USBConnection* pointer = CreateUSBConnection() //saves to a new variable "pointer"

        Before ending main(), we need to "delete pointer;". "pointer" is a variable outside of the class, it no longer relates to the destructor of the class USBConnection

        *Now recall the time that you must delete pointer pointing to dynamically allocated data in the destructor of your class. Why do you have to do so?
        Destructor is called everytime .. goes out of scope eg. when going outside of the scope of main() function. Destructor is called for each object instance created. That's why destructor does not delete the static data members because they don't belong to specific object instances.
        The destructor destroys every datamember in the specific object instance (but in reverse order). 
        However, if each object instance has a pointer that points to a dynamically allocated variable, the destructor does not call "delete" keyword so only the pointer is deleted but the object that it points is not delete if we don't declare "delete" in the destructor.
        If we do declare "delete" in the destructor, we don't have to write "delete" "delete" again in the end of main() to delete datamembers in each object.

        Meanwhile, in the case above of CreateUSBConnection(); it's the same as when we create a pointer pointing to a dynamical variable in main and in the end of main we have to delete it. the pointer that is returned from USBConnection does not belong to an onject instance of USBConnection class.

        *Look at Notion with many links to learn more about destructors:
        https://www.notion.so/Destructor-static-pointers-b1368d83e5aa4a3fabfc5239c7901930?pvs=4
 
        ?Static class variables will not get destroyed when a destructor of said class is executed.
        From the internet they say: "Static data members are NOT destroyed when an object's destructor is called. Keep in mind that a destructor cleans up a
        specific object (instance) of the class (all data members of each object instance of the class), but that has nothing to do with static data members of the class."
        Recall that static data members exist even if no objects of the class is called. As long as the main.cpp contains the definition of the class with static data members, static data members exist.


        */
    }
};

//!None of stack initilisation works
stack<int> USBConnection::ids = stack<int>({3,2,1}); //representing all empty ports

stack<int> USBConnection::ids
{
    ids.push(3);
    ids.push(2);
    ids.push(1);

};
        
//stack: pushing new elements to the "top" of the list and popping old elements out from the "top" of the list. this "top" is to the right

#endif
