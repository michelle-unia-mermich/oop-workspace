//TOPIC: static members in OOP
#ifndef USBConnection_H
#define USBConnection_H
#include <stack>
using namespace std;


class USBConnection 
{
    private:
        static stack<int> ids; //this is the stack<int> object
        int id; //id of each object
        USBConnection();
    
    public:
        static USBConnection* CreateUsbConnection() //pointer of stack<int> is just int*
        {  
            if ((ids.empty()!=true)&&(ids.size()<=3)) //eg. is the sie is not 0; can only add if the port is not empty. just check ids.size()<3 to make sure it's safe.
            {
                //only create the object if there is still space in the port
                USBConnection* new_object= new USBConnection();
                return new_object;
                //remove a number out from the port since we have a new object here
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
    
    ~USBConnection() //destructor like this is defaul publlic member even though it does not fall under the public domain
    {
        //return a used ID to the stack.
        ids.push(id); //THOUGHT THAT IDS IS STATIC. ONLY STATIC FUNCTIONS HAVE ACCESS TO STATIC DATA MEMBERS. THE CONSTRUCTORS AND DESTRUCTORS THUS DO NOT HAVE ACESS TO THE STATIC DATA RIGHT?
    }
};

USBConnection::USBConnection()
{
    id=ids.top()+1;
    if (id>3)
    {
        id=0;
        //this object's id will not be added to ids because the port is full
    }
};

stack<int> USBConnection::ids = stack<int>({3,2,1});
//representing all empty ports



#endif
