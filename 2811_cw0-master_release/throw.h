#ifndef THROW_H
#define THROW_H

#include "coin.h"
#include "command.h"
#include "mushroom.h"
#include "rock.h"
#include <iostream>

using namespace std;

// Command where a thing can be thrown to any adjacent tile
class Throw : public Command
{
public:
    Throw() : Command("throw") {};
    void fire(Cave& c, string userCommand);
};

#endif // THROW_H
