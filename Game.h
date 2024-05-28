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

            cout<< "Test Game.h: All have been added to the entities vector. the size of the vector now is: "<<entities.size()<<endl;

            return entities;
        }

        void gameLoop(int maxIterations, double mineDistanceThreshold) //function simulates the game
        {
            //The function should terminate when the number of iterations reaches maxIterations.
            int counterGameLoop=0;
            while (counterGameLoop<maxIterations)
            {
                //1-Call move(1, 0) for all Ship objects in entities.
                for (auto *entity: this->entities) //!this is the best way to access elements of the vector, Borna said
                {
                    if (entity->getType()=='S')
                    {
                        entity->move(1,0);
                    }
                }

                //2-Check if any Ship object is within a certain distance (mineDistanceThreshold) of a Mine object. 
                //If a Ship is found within the threshold, call explode() for the corresponding Mine.
                unsigned counterEntity1=0; 
                for (auto *entity1: this->entities)
                {
                    if (entity1->getType()=='S')
                    {
                        for (auto *entity2: this->entities)
                        {
                            if (entity2->getType()=='M')
                            {
                                Utils utilsObject;
                                double distance= utilsObject.calculateDistance(entity1->getPos(),entity1->getPos());
                                if (distance<mineDistanceThreshold)
                                {
                                    //1-call explode() for the corresponding Mine.
                                    //!entity2->explode();
                                    //!If the compiler understands the object as the base class (eg. when we use pointers to the base class) and not the child class, but we want to do functions of the base class, there are two ways (1) Declare virtual methods in the base class (2) DYNAMIC CASTING to the child classes (which anh Nam said is not recommended)
                                    //*In this case, in other to use explode(), have to use DYNAMIC CASTING; since cannot declare this function explode() in the base class
                                    //Derived* derivedClassPointer = dynamic_cast<Derived*-new pointer type>(baseClassPointer);
                                    //recall: explode function of Mine returns an Explosion object. Replace that object here at this position (the pointer at this position will point at the Explosion object instead)
                                    Mine* minePointer = dynamic_cast<Mine*>(entity2);
                                    minePointer->explode(); //recall minePointer is the pointer that points to the same address storing a Mine object as entity2. When this line is executed, we have already executed the explode() function on this objecdt.
                                    //this function will return an Explosion object while changing the type of the old Mine object to X
                                    //Explosion newExplosionObjectCreated= minePointer->explode(); //this is not needed because the function only says "call explode() for the corresponding Mine."
                                    cout<< "Test Game.h: One mine has exploded. Print out the type of this mine, should be X: "<< entity2->getType()<<endl;
                                    
                                    //2-when the mine explodes, we remove the ship out from the vector
                                    //?what is the best way to loop through the vector while keeping track of the country to access/delete the element of the vector using vector.at() and vector.erase()?
                                    delete this->entities.at(counterEntity1); 
                                    //!ERROR: deleting object of polymorphic class type ‘GameEntity’ which has non-virtual destructor might cause undefined behavior [-Wdelete-non-virtual-dtor]
                                    //?When does a class need a non-virtual destructor?
                                    this->entities.erase(this->entities.begin()+counterEntity1); 
                                    cout<< "Test Game.h: One ship exploded has been exploded and the remaining size of the vector is "<<entities.size()<<endl;
                                    counterEntity1--; //since we have already deleted an element from the vector
                                }
                            }
                        }
                    }
                    counterEntity1++;
                }
                
                //The function should terminate when either all Ship objects are destroyed
                //Check if there are still Ship objects in the vector
                int noShipsLeft=0; 
                for (auto *entity3: this->entities)
                {
                    if (entity3->getType()=='S')
                    {
                        noShipsLeft++;
                        cout<< "Test Game.h: Print out the number of ships left in every loop, this is loop with counterGameLoop: "<< counterGameLoop<<". No ships left are: "<< noShipsLeft<<endl;

                    }
                }

                if (noShipsLeft==0)
                {
                    //break out from the main game loop
                    break; //?Does this break break out the the nearest loop that it is in, ie. the while loop?
                }

                counterGameLoop++;
            }

        }
  
    
};

#endif