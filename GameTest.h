#include <iostream>
#include "Game.h"
using namespace std;

class GameTest 
{
public:
    void runTests() {
        //run test functions here, each test function tests one member function of the class
        testgameLoop();
    }

private:
    void testgameLoop() 
    {
        {
            /*
            What does this function do?
            
            In each iteration of the game loop"
            1- Call move(1, 0) for all Ship objects in entities 
            2- Check if any Ship object is within a certain distance (mineDistanceThreshold) of a Mine object. 
            If a Ship is found within the threshold, 
                1) all explode() for the corresponding Mine=> the type of the Mine turns into X
                2) the ship object is destroyed
            
            3- The function should terminate when either all Ship objects are destroyed or the number of iterations reaches maxIterations.
            
            */
            Game game; //Game only has a default constructor
            //initialise the entities vector in Game
            int numShips=1;
            int numMines=1;
            //*Grid: 3x4, starting from origin
            //"entities" vector should contain points pointing to numShips ships, numMines mines; each with position within the frame set by gridWidth and gridHeight
            std::vector<GameEntity*> temporary_entities;
            temporary_entities.push_back(new Ship(0,0));
            temporary_entities.push_back(new Mine(1,2));
            //set the entities in the game object to this temp entities
            game.set_entities(temporary_entities);

            int maxIterations=3;
            double mineDistanceThreshold=3.00;

            game.gameLoop(maxIterations,mineDistanceThreshold);
            //The vector contains 1 mine and 1 ship.
            //After the first iteration, the mine explodes and the ship is deleted&removed

            //Expected output: the game should end after 1 iterations
            if (game.noIterationsRun != 1) {
                cout << "ERROR: the expected no. iterations run is 1 but no.iterations run is "<<game.noIterationsRun<<endl;
            }

            //Expected output: while the initial size of entities vector is 2, 
            //the size of vector entities now should be 1
            //the only element left in vector is an exploded mine
            cout << "No. of iterations the game has run is "<<game.noIterationsRun<<endl;
            cout<< "The size of vector now is (should be 1): "<<game.get_entities().size()<<endl;
            cout<< "Loop through every element left in the vector: "<<endl;
            for (auto *entity: game.get_entities())
            {
                cout<<"Entity has char type "<<entity->getType()<<"with position ("<<std::get<0>(entity->getPos())<<","<<std::get<1>(entity->getPos())<<")"<<endl;
            }
        }
    }
};

