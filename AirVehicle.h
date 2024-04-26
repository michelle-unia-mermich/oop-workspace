#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H
#include <string>
using namespace std;

class AirVehicle
{
    protected:
        int weight;
        float fuel; //fuel percentage, initially 100%
        int numberOfFlights; //initially 0

    public:
        AirVehicle();
        AirVehicle(int w); //create an air vehicle with weight w
        
        void refuel(); //resets fuel back to 100%
        virtual void fly (int headwind, int minutes); //headwind in km/h and minutes as time flying. everytime it's called increase the number of flights by 1
        
        //getter and setter functions
        int get_weight();
        void set_weight(int new_weight);
        float get_fuel();
        void set_fuel(float new_fuel);
        int get_numberOfFlights();
        void set_numberOfFlights(int new_numberOfFlights);

    ~AirVehicle()
    {

    };
};

#endif
