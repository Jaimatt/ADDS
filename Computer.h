#ifndef COMP_H
#define COMP_H

using namespace std;

#include <iostream>
#include <string>

class Computer : private Player {
    char makeMove() {
        return 'R';
    };
};

#endif