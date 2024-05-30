//this version of Game.h is according to the wrong understanding of the question. When the ship is within distance from the mine, the ship is not deleted from the vector but just have the explostion type .apply() on the ship and change the ship's type to X.

#ifndef GAME_H
#define GAME_H
#include <string>
#include <tuple>
#include <vector>
#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
using namespace std;

class Game
{
    private:
        std::vector<GameEntity*> entities;


    public:
        //for testing
        int noIterationsRun=0;

        Game(){}

        std::vector<GameEntity*> get_entities()
        {
            return entities;
        }

        void set_entities(std::vector<GameEntity*> newEntities)
        {
            entities=newEntities;
        }

        std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight)
        {
            // create the specified number of Ship and Mine objects with random positions within the grid dimensions using the Utils::generateRandomPos method.
            for (int i=0; i<numShips; i++)
            {
                Utils utilsObject;
                std::tuple<int, int> randomPosition1= utilsObject.generateRandomPos(gridWidth, gridHeight);
                this->entities.push_back(new Ship(std::get<0>(randomPosition1),std::get<1>(randomPosition1)));
            }

            for (int i=0; i<numMines; i++)
            {
                Utils utilsObject;
                std::tuple<int, int> randomPosition1= utilsObject.generateRandomPos(gridWidth, gridHeight);
                this->entities.push_back(new Mine(std::get<0>(randomPosition1),std::get<1>(randomPosition1)));
            }

            return entities;
        }

        void gameLoop(int maxIterations, double mineDistanceThreshold) //function simulates the game
        {
            //The function should terminate when the number of iterations reaches maxIterations.
            int counterGameLoop=0;
            while (counterGameLoop<maxIterations)
            {
                //1-Call move(1, 0) for all Ship objects in entities.
                for (auto *entity: this->entities) 
                {
                    if (entity->getType()=='S')
                    {
                        entity->move(1,0);
                    }
                }

                //2-Check if any Ship object is within a certain distance (mineDistanceThreshold) of a Mine object. 
                //If a Ship is found within the threshold, call explode() for the corresponding Mine.
            
                for (auto &entity1: this->entities) //there is no difference in the output between using auto* and auto&
                {
                    if (entity1->getType()=='S')
                    {
                        for (auto *entity2: this->entities)
                        {
                            if (entity2->getType()=='M')
                            {

                                double distance= Utils::calculateDistance(entity1->getPos(),entity2->getPos());

                                if (distance<=mineDistanceThreshold)
                                {
                                    //1-call explode() for the corresponding Mine.
                                    //cout<<"type entity2 before explode:"<<entity2->getType()<<endl;
                                    Mine* minePointer = dynamic_cast<Mine*>(entity2);
                                    minePointer->explode();
                                    //cout<<"type entity2 after explode:"<<entity2->getType()<<endl;
                                    
                                    //2-change the boolean value of the ship
                                    Ship* shipPointer2 = dynamic_cast<Ship*>(entity1);
                                    shipPointer2->hasMetMine=true;
                                }
                            }
                        }
                    }
                }

                unsigned counterRemoveShip=0;
                for (auto *entity: this->entities) 
                {
                    if ((entity->getType()=='S'))
                    {
                        //dynamic casting
                        Ship* shipPointer = dynamic_cast<Ship*>(entity);
                        if(shipPointer->hasMetMine==true)
                        {
                            delete this->entities.at(counterRemoveShip); 
                            this->entities.erase(this->entities.begin()+counterRemoveShip); 
                            counterRemoveShip--;
                        }
                    }
                    counterRemoveShip++;
                }
                    
                
                
                
                //The function should terminate when either all Ship objects are destroyed
                //Check if there are still Ship objects in the vector
                int noShipsLeft=0; 
                for (auto *entity3: this->entities)
                {
                    if (entity3->getType()=='S')
                    {
                        noShipsLeft++;
                        //cout<< "Test Game.h: Print out the number of ships left in every loop, this is loop with counterGameLoop: "<< counterGameLoop<<". No ships left are: "<< noShipsLeft<<endl;

                    }
                }

                counterGameLoop++; //to keep track of the number of iterations run before breaking the loop

                if (noShipsLeft==0)
                {
                    //break out from the main game loop
                    //cout<< "There are no ships left after iteration no. "<< counterGameLoop<<". Will break the loop now"<<endl;
                    break; 
                }
            }
            //After the main game loop has ended, for Testing
            noIterationsRun=counterGameLoop;
                
        }
            
};
  
    

#endif