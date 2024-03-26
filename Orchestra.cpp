#include "Orchestra.h"
#include "Musician.h"

Orchestra::Orchestra()
{
    max_size=0;
    current_size=0;
}

Orchestra::Orchestra(int max_sizeee)
{
    max_size=max_sizeee;
    current_size=0;
    musician_array =new Musician[max_size];
}

int Orchestra::get_current_number_of_members()
{
    return current_size;
}

bool Orchestra::has_instrument(std::string instrument)
{
    bool ans=false;
    for(int i=0;i<current_size;i++)
    {
        if (musician_array[i].get_instrument()==instrument)
        {
            ans=true;
            break;
        }
    }
    return ans;
}

// returns the array of members of the orchestra
Musician* Orchestra::get_members()
{
    return musician_array;
}

// returns true and adds new musician to the orchestra if the orchestra is not full otherwise returns false
bool Orchestra::add_musician(Musician new_musician)
{
    bool ans=false;
    if(current_size<max_size)
    {
        bool ans=true;
        //add new musician to the orchestra
        //let's say the current_size is 0, you add musician to index 0
        //if the current_size is 1, you add musician to index 0
        //the maximum current_size is max_size-1 for this chunk of code current_size<max_size is true. corresponding to the last element of the array
        musician_array[current_size]=new_musician;
        current_size++;
    }
    else
    {
        ans=false;
    }

    return ans;

}
;

//