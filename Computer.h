#ifndef COMP_H
#define COMP_H

using namespace std;

#include <iostream>
#include <string>

class Computer : public Player {
    public:
        Computer() {
            name = "pc";
        };

        char makeMove() {
            return 'R';
        };
};

#endif