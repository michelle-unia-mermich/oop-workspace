#ifndef ASSISTS_H
#define ASSISTS_H

#include <tuple>

#include <time.h>
#include <cmath>

class Assists
{
    public:
        static std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight)
        {
            //returns a random location within the game's matrix. (0,0) should be the first location
            //"(0,0) as the first location" in the question is as in the first location this random function returns or just means the coordinates follow positive coordinates and thus (0,0) is the beginning coordinate? Answer: the latter. the random function does not need to return (0,0) as the first coordinate.
            int x = rand()% matrixWidth;
            int y = rand()% matrixHeight;
            return std::make_tuple(x,y);
        }

        static double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2)
        {
            //returns the Euclidean distance between two locations
            int x1= std::get<0>(loc1);
            int y1= std::get<1>(loc1);
            int x2= std::get<0>(loc2);
            int y2= std::get<1>(loc2);
            return sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
        }


};
#endif