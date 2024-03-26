//#pragma once

#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>

//class definition
class Musician 
{
    private:
        int experience;
        std::string instrument;
    public:
        Musician(std::string instru, int exp);
        Musician();
        std::string get_instrument();
        int get_experience();
};

#endif //MUSICAN_H
