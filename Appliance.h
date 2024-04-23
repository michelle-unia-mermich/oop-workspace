#ifndef APPLIANCE_H
#define APPLIANCE_H
#include <string>
using namespace std;

class Appliance
{
    protected:
        int _powerRating;
        bool _isOn;
    public:
        Appliance();
        Appliance(int powerRating); //create an appliance with a power rating
        void turnOn();
        void turnOff();
        
        //getter and setter functions
        double get_powerRating(); 
        void set_powerRating(int new_powerRating);
        double get_isOn(); 
        ///void set_isOn(); //We can change the _isOn using the turn on and turn off function

        //a virtual function and makes it returns zero //virtual 
        double getPowerConsumption();

    ~Appliance()
    {

    };
};

#endif
