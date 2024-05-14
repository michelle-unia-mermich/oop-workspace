#include "USBConnection.h"

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


