#ifndef SPOT_H
#define SPOT_H

#include <tuple>

class Spot
{
    protected:
        std::tuple<int,int> location;
        char category;
    public:
        Spot(int x, int y, char category)
        {
            location = std::make_tuple(x,y);
            this->category=category;
        }

        std::tuple<int, int> getLoc()
        {
            return location;
        }

        char getCategory()
        {
            return category;
        }

        void setLoc(int x, int y)
        {
            location = std::make_tuple(x,y);
        }

        void setCategory(char category)
        {
            this->category=category;
        }

        //note: need to have at least one virtual method. 
        //the virtual method is necessary because we need to tell the compiler that Spot is a polymorphic class to use dyamic_cast
        virtual ~Spot(){} //!virtual destructor. You have forgotten once: it's NECESSARY to have virtual destructor for polymorphic base class when only instances of derived classes are used. See Notion.
        //virtual destructor or not in base class doesn't have a difference in this case because we don't declare delete any dynamic var in the derived classes' constructors, but it will be useful in the future.

};
#endif