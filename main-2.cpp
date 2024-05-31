#include "Snare.h"
#include "Persona.h"


#include <iostream>
using namespace std;

int main()
{
    //demonstrate the functionality of the Snare and Persona classes and their interaction with each other.
    Persona persona = Persona(1,0);
    Snare snare = Snare(2,0);

    persona.shift(3,4);
    cout<< "The new location of persona is: " 
    << "("<<std::get<0>(persona.getLoc()) <<","<<std::get<1>(persona.getLoc())<<")"<< endl;

    cout<< "The initial operative state of snare is: "<< snare.isOperative() << endl;
    cout<< "The initial category of Persona is: "<< persona.getCategory() << endl;
    snare.implement(persona);
    cout<< "After implement, the operative state of snare is: "<< snare.isOperative() << endl;
    cout<< "After implement, the category of Persona is: "<< persona.getCategory() << endl;

    return 0;
}