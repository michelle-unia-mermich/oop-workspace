#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include <string>
#include "Musician.h"

//class definition
class Orchestra 
{
    private:
        //int max_size;
        //int current_size;
    public:
        int max_size;
        int current_size;
        Musician * musician_array;
        //Musician musician_array[current_size]; //cannot use this because current_size is not static
        Orchestra();
        Orchestra(int max_sizeee);
        // returns the number of musicians who have joined the orchestra
        int get_current_number_of_members(); 
        // returns true if any musician in the orchestra plays the specified instrument
        bool has_instrument(std::string instrument); 
        
        // returns the array of members of the orchestra
        Musician *get_members();        
        
        // returns true and adds new musician to the orchestra if the orchestra is not full otherwise returns false
        bool add_musician(Musician new_musician);
        
    ~Orchestra()
    {
         delete [] musician_array;
    };
};

#endif //MUSICAN_H
