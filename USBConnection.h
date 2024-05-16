//TOPIC: static members in OOP
#ifndef USBConnection_H
#define USBConnection_H
#include <stack>
using namespace std;


class USBConnection 
{
    private:
        static stack<int> ids; //this is the stack<int> object. It is static because each USBconnection object will have the same static object ids
        int id; //id of each object
        USBConnection(); 
        //When do we put constructor in private? We need to have a function in public to call out the instructor, and in this function, we can set conditions whether the constructor can be called or not. We do not allow users to use constructor and create the objects anytine.
    
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
                new_object->set_id(ids.top());
                //!Am I right to say that only static functions have access to static data members, not non-static functions; but static functions have access 
                //!to both static, non static data members; and only static and non-static functions -everything? because in this case the static function is 
                //!using static function set_id(). 

                //? Can this static function use non-static data member eg.id as well? NO (resolved)
                //? this->id=ids.top();
                //? If you run this line, error is "this is only used for non-static function". when you write id=ids.top(). this-> is implicitly used. it's the same as this->id=ids.top().
                //? Basically everytim you use a non-static data member or non-static function, an object this-> is implicitly passed
                //? static function does not belong to any object, so ofc cannot use this->

                //? Can this static function use non-satic function? No, cannot
                //?int a=this->get_id(); //error

                
                
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

        void set_id(int new_id)
        {
            this->id=new_id;
        }
    
    ~USBConnection() //!ASK ABOUT ENCAPSULATION OF DESTRUCTOR: destructor like this is defaul publlic member even though it does not fall under the public domain
    {
        //When an object is desetroyed, return its used ID to the stack.
        ids.push(id); //!THOUGHT THAT IDS IS a STATIC data member. ONLY STATIC FUNCTIONS HAVE ACCESS TO STATIC DATA MEMBERS. THE CONSTRUCTORS AND DESTRUCTORS THUS DO NOT HAVE ACESS TO THE STATIC DATA RIGHT?
        //!Do we have to destroy the dynamic object created? but that dynamic object is not a data member but a variable in the function?
    }
};

stack<int> USBConnection::ids = stack<int>({3,2,1}); //representing all empty ports
//stack: pushing new elements to the "top" of the list and popping old elements out from the "top" of the list. this "top" is to the right



#endif
