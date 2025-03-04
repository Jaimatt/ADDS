#ifndef HUMAN_H
#define HUMAN_H

using namespace std;

#include <iostream>
#include <string>
#include "Player.h"

class Human : public Player {
    public:

        Human() {
            name = "Human";
        }

        char makeMove() {
            char move;
            cout << "Enter move: ";
            cin >> move;
            return move;
        };
};

#endif