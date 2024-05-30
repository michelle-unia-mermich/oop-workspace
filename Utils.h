#ifndef UTILS_H
#define UTILS_H
#include <string>
#include <tuple>
#include <iostream>
#include "time.h"
#include <cmath>
using namespace std;

class Utils
{
    public:
        static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight)
        {
            //Returns a random position within a grid represented by gridWidth and gridHeight as a std::tuple<int, int>.
            int xCoord= rand()%(gridWidth);
            int yCoord= rand()%(gridHeight);
            return std::tuple<int,int> (xCoord,yCoord);
        }
        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2)
        {
            //Returns the Euclidean distance between two positions given as pos1 and pos2 as a double.
            cout<<"Return the 1st pos Utils is calculating" <<std::get<0>(pos1)<<","<<std::get<1>(pos1)<<")"<<endl;
            cout<<"Return the 2nd pos Utils is calculating" <<std::get<0>(pos2)<<","<<std::get<1>(pos2)<<")"<<endl;
            return sqrt( pow(  ((std::get<0>(pos1))-(std::get<0>(pos2))),  2   )+pow(  ((std::get<1>(pos1))-(std::get<1>(pos2))),   2  )    );
            //the syntax must have bracket in (pos1) when using std::get
        }
};

#endif