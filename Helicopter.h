#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <string>
using namespace std;
#include "AirVehicle.h"

class Helicopter: public AirVehicle
{
    private:
        string name; 

    public:
        Helicopter(); //by saying this does nothing, do you mean that it has empty code or set name into null string
        Helicopter(int w, string n); //create a helicopter with weight w and name n
        
        void set_name(string new_name);
        string get_name();

        void fly (int headwind, int minutes) override; //override: it may have an effect on the code but not in this case. This one is for readability.

    ~Helicopter()
    {

    };
};

#endif
