#include "time.h"
#include <iostream>
#include "Game.h"
using namespace std;

int main()
{
    srand( static_cast<unsigned int>(  time(0)  )  );

    Game gameObject;
    int numShips=10;
    int numMines=20;
    int gridWidth=40;
    int gridHeight=30;
    gameObject.initGame(numShips,numMines,gridWidth,gridHeight);
    int maxIterations=20;
    double mineDistanceThreshold=40;
    gameObject.gameLoop(maxIterations,mineDistanceThreshold);
    return 0;
}