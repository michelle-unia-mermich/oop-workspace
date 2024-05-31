#ifndef PLAY_H
#define PLAY_H

#include <vector>

#include "Persona.h"
#include "Snare.h"
#include "Assists.h"

#include <iostream>
using namespace std;

class Play
{
    private:
        
        std::vector<Spot*> matrix;

        int matrixWidth;
        int matrixHeight;


    public:
        //has a default constructor
        //?So we don't need to declare constructor at all? Answer: yes, it is accepted on Gradescope.

        std::vector<Spot*>& getMatrix()
        {
            return matrix;
        }

        void initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight)
        {
            //initializes the gameplay with a certain number of each object at random locations in the matrix.
            this->matrixWidth=matrixWidth;
            this->matrixHeight=matrixHeight;

            for ( int i=0; i< numPersonas; i++)
            {
                std::tuple<int,int> newLoc = Assists::createRandomLoc(matrixWidth,matrixHeight);
                int x = std::get<0>(newLoc);
                int y = std::get<1>(newLoc);
                matrix.push_back( new Persona(x,y));
            }

            for ( int i=0; i< numSnares; i++)
            {
                std::tuple<int,int> newLoc = Assists::createRandomLoc(matrixWidth,matrixHeight);
                int x = std::get<0>(newLoc);
                int y = std::get<1>(newLoc);
                matrix.push_back( new Snare(x,y));
            }
            /*
            //for testing purpose, print out the elements that have been added to the matrix
            cout << "Initilisation is complete. The elements in the vector are: "<< endl;
            for ( auto& entry: matrix)
            {
                cout << "The object has type "<<entry->getCategory()<<" and location: "
                << "("<<std::get<0>(entry->getLoc()) <<","<<std::get<1>(entry->getLoc())<<")"<< endl;
            }
            */

        }

        void playCycle(int maxCycles, double snareTriggerDistance)
        {
            int counterGameLoop=0;
            while(counterGameLoop<maxCycles)
            {
                for (auto& entry1: matrix)
                {
                    if((entry1->getCategory()=='P')&& (dynamic_cast<Persona*>(entry1)!=nullptr))
                    {
                        //*1- shifts all Persona objects in the matrix to the right by (1,0)
                        Persona* personaTempPointer = dynamic_cast<Persona*>(entry1);
                        personaTempPointer->shift(1,0);

                        //*2- check if the persona is within the range of any snare
                        for (auto& entry2: matrix)
                        {
                            if((entry2->getCategory()=='S')&& (dynamic_cast<Snare*>(entry2)!=nullptr))
                            {
                                Snare* snareTempPointer= dynamic_cast<Snare*>(entry2);

                                double distance = Assists::evaluateDistance(entry1->getLoc(),entry2->getLoc());
                                if ((distance<=snareTriggerDistance)&& (snareTempPointer->isOperative()))
                                {
                                    snareTempPointer->implement(*entry1);
                                }
                            }
                        }
                    }
                }

                //*Check if any Persona has stepped outside the matrix
                for (auto& persona: matrix)
                {
                    if(persona->getCategory()=='P')
                    {
                        int xPosition= std::get<0>(persona->getLoc());
                        //Checks if any Persona has stepped outside of the matrix. If so, the game is won 
                        if (xPosition>matrixWidth)
                        {
                            cout<<"Persona has won the game!"<<endl;
                            return; //end the game cycle
                        }
                    }
                }

                //*increment the counter in the main loop
                counterGameLoop++;
            }

            if (counterGameLoop>=maxCycles) //technically it will never > due to the while loop
            {
                cout<< "Maximum number of cycles reached. Game over."<< endl;
            }
        }

        ~Play()
        {
            //!if a class has dynamic data members, do not forget to clean up in destructor
            //?If a class has a vector storing pointers pointing to dynamic objects, when the default 
            //?constructor deletes the vector, it only deletes the vectors and the pointers in the vector 
            //?but it does not delete the dynamically allocated objects the pointers point to right? JUST LIKE AN ARRAY OF DYNAMIC POINTERS
            //?So we have to loop through the vector and do like this:
            
            unsigned it=0; //assign a counter to keep track of index in the vector
            for (auto* entry: this->matrix) 
            {

                delete this->matrix.at(it); //Delete the dynamically allocated objects, since entities is a vector holding dynamic pointer   
                /*
                no need to delete the vector pointer from the vector because when vector is deleted, entries inside will be as well.
                this->entities.erase(this->entities.begin()+counterRemoveShip); 
                counterRemoveShip--;
                */
                it++;
            }

        }
};

#endif

