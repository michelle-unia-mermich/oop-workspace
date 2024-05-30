#ifndef EFFECT_H
#define EFFECT_H
#include <string>
#include <tuple>
#include <iostream>
#include "GameEntity.h"
using namespace std;

class Effect
{
    public:
        virtual void apply(GameEntity& entity)=0;
};

#endif