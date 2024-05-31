#include "Play.h"

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    //randomise time
    srand( static_cast<unsigned int>(  time(0)  )  );

    Play play;

    int numPersonas=5;
    int numSnares=5;
    int matrixWidth=10;
    int matrixHeight=6;

    play.initPlay(numPersonas, numSnares, matrixWidth, matrixHeight);

    int maxCycles=5;
    double snareTriggerDistance=3;
    play.playCycle(maxCycles,snareTriggerDistance);

    return 0;
}