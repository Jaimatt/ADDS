#ifndef COMP_H
#define COMP_H

using namespace std;

#include <iostream>
#include <string>
#include "Player.h"

class Computer : public Player {
    public:
        char makeMove() {
            return 'R';
        };
};

#endif