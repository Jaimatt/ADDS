#ifndef COMP_H
#define COMP_H

using namespace std;

#include <iostream>
#include <string>
#include "Player.h"

class Computer : public Player {
    public:

        Computer() {
            name = "somp";
        }

        char makeMove() {
            return 'R';
        };
};

#endif