#include "time.h"
#include <iostream>
#include "Game.h"
using namespace std;

int main()
{
    srand( static_cast<unsigned int>(  time(0)  )  );

    Game gameObject;
    int numShips=1;
    int numMines=5;
    int gridWidth=2;
    int gridHeight=15;
    gameObject.initGame(numShips,numMines,gridWidth,gridHeight);
    int maxIterations=5;
    double mineDistanceThreshold=3;
    gameObject.gameLoop(maxIterations,mineDistanceThreshold);
    return 0;
}