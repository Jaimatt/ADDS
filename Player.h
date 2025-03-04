#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

#include <iostream>
#include <string>

class Player {
    public:

        string name;

        virtual char makeMove() = 0;
        string getName() {
            return name;
        };
};

#endif